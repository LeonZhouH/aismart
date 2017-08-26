/* Require Rose v1.0.10 or above. $ */

#define GETTEXT_DOMAIN "aismart-lib"

#include "base_instance.hpp"
#include "gui/dialogs/message.hpp"
#include "gui/dialogs/chat.hpp"
#include "gui/dialogs/home.hpp"
#include "gui/widgets/window.hpp"
#include "game_end_exceptions.hpp"
#include "wml_exception.hpp"
#include "gettext.hpp"
#include "loadscreen.hpp"
#include "formula_string_utils.hpp"
#include "help.hpp"
#include "version.hpp"
#include "tensorflow_link.hpp"


class game_instance: public base_instance
{
public:
	game_instance(rtc::PhysicalSocketServer& ss, int argc, char** argv);

private:
	void app_tensorflow_link() override;
	void app_load_settings_config(const config& cfg) override;
};

game_instance::game_instance(rtc::PhysicalSocketServer& ss, int argc, char** argv)
	: base_instance(ss, argc, argv)
{
}

void game_instance::app_tensorflow_link()
{
	tensorflow_link_modules();
}

void game_instance::app_load_settings_config(const config& cfg)
{
	game_config::version = cfg["version"].str();
	game_config::wesnoth_version = version_info(game_config::version);
}

/**
 * Setups the game environment and enters
 * the titlescreen or game loops.
 */
static int do_gameloop(int argc, char** argv)
{
	rtc::PhysicalSocketServer ss;
	instance_manager<game_instance> manager(ss, argc, argv, "aismart", "#rose", false);
	game_instance& game = manager.get();

	try {
		for (;;) {
			game.loadscreen_manager().reset();
			const font::floating_label_context label_manager;

			cursor::set(cursor::NORMAL);

			{
				gui2::thome dlg(game.disp());
				dlg.show(game.disp().video());
				gui2::thome::tresult res = static_cast<gui2::thome::tresult>(dlg.get_retval());
				VALIDATE(res == gui2::thome::CHAT, null_str);
			}

			{
				gui2::tchat2 dlg(game.disp());
				dlg.show(game.disp().video());
			}
		}

	} catch (twml_exception& e) {
		e.show(game.disp());

	} catch (CVideo::quit&) {
		//just means the game should quit
		posix_print("SDL_main, catched CVideo::quit\n");

	} catch (game_logic::formula_error& e) {
		gui2::show_error_message(game.disp().video(), e.what());
	} 

	return 0;
}

int main(int argc, char** argv)
{
	try {
		do_gameloop(argc, argv);
	} catch (twml_exception& e) {
		// this exception is generated when create instance.
		posix_print_mb("%s\n", e.user_message.c_str());
	}

	return 0;
}