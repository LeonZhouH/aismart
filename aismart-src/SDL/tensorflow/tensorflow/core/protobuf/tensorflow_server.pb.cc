// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/tensorflow_server.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "tensorflow/core/protobuf/tensorflow_server.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace tensorflow {
class ServerDefDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<ServerDef> {
} _ServerDef_default_instance_;

namespace protobuf_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerDef, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerDef, cluster_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerDef, job_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerDef, task_index_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerDef, default_session_config_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerDef, protocol_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(ServerDef)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_ServerDef_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "tensorflow/core/protobuf/tensorflow_server.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _ServerDef_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::tensorflow::protobuf_tensorflow_2fcore_2fprotobuf_2fconfig_2eproto::InitDefaults();
  ::tensorflow::protobuf_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto::InitDefaults();
  _ServerDef_default_instance_.DefaultConstruct();
  _ServerDef_default_instance_.get_mutable()->cluster_ = const_cast< ::tensorflow::ClusterDef*>(
      ::tensorflow::ClusterDef::internal_default_instance());
  _ServerDef_default_instance_.get_mutable()->default_session_config_ = const_cast< ::tensorflow::ConfigProto*>(
      ::tensorflow::ConfigProto::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n0tensorflow/core/protobuf/tensorflow_se"
      "rver.proto\022\ntensorflow\032%tensorflow/core/"
      "protobuf/config.proto\032&tensorflow/core/p"
      "rotobuf/cluster.proto\"\245\001\n\tServerDef\022\'\n\007c"
      "luster\030\001 \001(\0132\026.tensorflow.ClusterDef\022\020\n\010"
      "job_name\030\002 \001(\t\022\022\n\ntask_index\030\003 \001(\005\0227\n\026de"
      "fault_session_config\030\004 \001(\0132\027.tensorflow."
      "ConfigProto\022\020\n\010protocol\030\005 \001(\tB/\n\032org.ten"
      "sorflow.distruntimeB\014ServerProtosP\001\370\001\001b\006"
      "proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 366);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow/core/protobuf/tensorflow_server.proto", &protobuf_RegisterTypes);
  ::tensorflow::protobuf_tensorflow_2fcore_2fprotobuf_2fconfig_2eproto::AddDescriptors();
  ::tensorflow::protobuf_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto::AddDescriptors();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto


// ===================================================================

void ServerDef::_slow_mutable_cluster() {
  cluster_ = ::google::protobuf::Arena::CreateMessage< ::tensorflow::ClusterDef >(
      GetArenaNoVirtual());
}
::tensorflow::ClusterDef* ServerDef::_slow_release_cluster() {
  if (cluster_ == NULL) {
    return NULL;
  } else {
    ::tensorflow::ClusterDef* temp = new ::tensorflow::ClusterDef(*cluster_);
    cluster_ = NULL;
    return temp;
  }
}
::tensorflow::ClusterDef* ServerDef::unsafe_arena_release_cluster() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.ServerDef.cluster)
  
  ::tensorflow::ClusterDef* temp = cluster_;
  cluster_ = NULL;
  return temp;
}
void ServerDef::_slow_set_allocated_cluster(
    ::google::protobuf::Arena* message_arena, ::tensorflow::ClusterDef** cluster) {
    if (message_arena != NULL && 
        ::google::protobuf::Arena::GetArena(*cluster) == NULL) {
      message_arena->Own(*cluster);
    } else if (message_arena !=
               ::google::protobuf::Arena::GetArena(*cluster)) {
      ::tensorflow::ClusterDef* new_cluster = 
            ::google::protobuf::Arena::CreateMessage< ::tensorflow::ClusterDef >(
            message_arena);
      new_cluster->CopyFrom(**cluster);
      *cluster = new_cluster;
    }
}
void ServerDef::unsafe_arena_set_allocated_cluster(
    ::tensorflow::ClusterDef* cluster) {
  if (GetArenaNoVirtual() == NULL) {
    delete cluster_;
  }
  cluster_ = cluster;
  if (cluster) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.ServerDef.cluster)
}
void ServerDef::_slow_mutable_default_session_config() {
  default_session_config_ = ::google::protobuf::Arena::CreateMessage< ::tensorflow::ConfigProto >(
      GetArenaNoVirtual());
}
::tensorflow::ConfigProto* ServerDef::_slow_release_default_session_config() {
  if (default_session_config_ == NULL) {
    return NULL;
  } else {
    ::tensorflow::ConfigProto* temp = new ::tensorflow::ConfigProto(*default_session_config_);
    default_session_config_ = NULL;
    return temp;
  }
}
::tensorflow::ConfigProto* ServerDef::unsafe_arena_release_default_session_config() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.ServerDef.default_session_config)
  
  ::tensorflow::ConfigProto* temp = default_session_config_;
  default_session_config_ = NULL;
  return temp;
}
void ServerDef::_slow_set_allocated_default_session_config(
    ::google::protobuf::Arena* message_arena, ::tensorflow::ConfigProto** default_session_config) {
    if (message_arena != NULL && 
        ::google::protobuf::Arena::GetArena(*default_session_config) == NULL) {
      message_arena->Own(*default_session_config);
    } else if (message_arena !=
               ::google::protobuf::Arena::GetArena(*default_session_config)) {
      ::tensorflow::ConfigProto* new_default_session_config = 
            ::google::protobuf::Arena::CreateMessage< ::tensorflow::ConfigProto >(
            message_arena);
      new_default_session_config->CopyFrom(**default_session_config);
      *default_session_config = new_default_session_config;
    }
}
void ServerDef::unsafe_arena_set_allocated_default_session_config(
    ::tensorflow::ConfigProto* default_session_config) {
  if (GetArenaNoVirtual() == NULL) {
    delete default_session_config_;
  }
  default_session_config_ = default_session_config;
  if (default_session_config) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.ServerDef.default_session_config)
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ServerDef::kClusterFieldNumber;
const int ServerDef::kJobNameFieldNumber;
const int ServerDef::kTaskIndexFieldNumber;
const int ServerDef::kDefaultSessionConfigFieldNumber;
const int ServerDef::kProtocolFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ServerDef::ServerDef()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.ServerDef)
}
ServerDef::ServerDef(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto::InitDefaults();
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.ServerDef)
}
ServerDef::ServerDef(const ServerDef& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  job_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.job_name().size() > 0) {
    job_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.job_name(),
      GetArenaNoVirtual());
  }
  protocol_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.protocol().size() > 0) {
    protocol_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.protocol(),
      GetArenaNoVirtual());
  }
  if (from.has_cluster()) {
    cluster_ = new ::tensorflow::ClusterDef(*from.cluster_);
  } else {
    cluster_ = NULL;
  }
  if (from.has_default_session_config()) {
    default_session_config_ = new ::tensorflow::ConfigProto(*from.default_session_config_);
  } else {
    default_session_config_ = NULL;
  }
  task_index_ = from.task_index_;
  // @@protoc_insertion_point(copy_constructor:tensorflow.ServerDef)
}

void ServerDef::SharedCtor() {
  job_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  protocol_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&cluster_, 0, reinterpret_cast<char*>(&task_index_) -
    reinterpret_cast<char*>(&cluster_) + sizeof(task_index_));
  _cached_size_ = 0;
}

ServerDef::~ServerDef() {
  // @@protoc_insertion_point(destructor:tensorflow.ServerDef)
  SharedDtor();
}

void ServerDef::SharedDtor() {
  ::google::protobuf::Arena* arena = GetArenaNoVirtual();
  if (arena != NULL) {
    return;
  }

  job_name_.Destroy(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), arena);
  protocol_.Destroy(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), arena);
  if (this != internal_default_instance()) {
    delete cluster_;
  }
  if (this != internal_default_instance()) {
    delete default_session_config_;
  }
}

void ServerDef::ArenaDtor(void* object) {
  ServerDef* _this = reinterpret_cast< ServerDef* >(object);
  (void)_this;
}
void ServerDef::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void ServerDef::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ServerDef::descriptor() {
  protobuf_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ServerDef& ServerDef::default_instance() {
  protobuf_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto::InitDefaults();
  return *internal_default_instance();
}

ServerDef* ServerDef::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<ServerDef>(arena);
}

void ServerDef::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.ServerDef)
  job_name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  protocol_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  if (GetArenaNoVirtual() == NULL && cluster_ != NULL) {
    delete cluster_;
  }
  cluster_ = NULL;
  if (GetArenaNoVirtual() == NULL && default_session_config_ != NULL) {
    delete default_session_config_;
  }
  default_session_config_ = NULL;
  task_index_ = 0;
}

bool ServerDef::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.ServerDef)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .tensorflow.ClusterDef cluster = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_cluster()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string job_name = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_job_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->job_name().data(), this->job_name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.ServerDef.job_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 task_index = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &task_index_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .tensorflow.ConfigProto default_session_config = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_default_session_config()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string protocol = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_protocol()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->protocol().data(), this->protocol().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.ServerDef.protocol"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tensorflow.ServerDef)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.ServerDef)
  return false;
#undef DO_
}

void ServerDef::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.ServerDef)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .tensorflow.ClusterDef cluster = 1;
  if (this->has_cluster()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->cluster_, output);
  }

  // string job_name = 2;
  if (this->job_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->job_name().data(), this->job_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.ServerDef.job_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->job_name(), output);
  }

  // int32 task_index = 3;
  if (this->task_index() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->task_index(), output);
  }

  // .tensorflow.ConfigProto default_session_config = 4;
  if (this->has_default_session_config()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *this->default_session_config_, output);
  }

  // string protocol = 5;
  if (this->protocol().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->protocol().data(), this->protocol().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.ServerDef.protocol");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->protocol(), output);
  }

  // @@protoc_insertion_point(serialize_end:tensorflow.ServerDef)
}

::google::protobuf::uint8* ServerDef::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.ServerDef)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .tensorflow.ClusterDef cluster = 1;
  if (this->has_cluster()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->cluster_, deterministic, target);
  }

  // string job_name = 2;
  if (this->job_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->job_name().data(), this->job_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.ServerDef.job_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->job_name(), target);
  }

  // int32 task_index = 3;
  if (this->task_index() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->task_index(), target);
  }

  // .tensorflow.ConfigProto default_session_config = 4;
  if (this->has_default_session_config()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, *this->default_session_config_, deterministic, target);
  }

  // string protocol = 5;
  if (this->protocol().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->protocol().data(), this->protocol().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.ServerDef.protocol");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->protocol(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.ServerDef)
  return target;
}

size_t ServerDef::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.ServerDef)
  size_t total_size = 0;

  // string job_name = 2;
  if (this->job_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->job_name());
  }

  // string protocol = 5;
  if (this->protocol().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->protocol());
  }

  // .tensorflow.ClusterDef cluster = 1;
  if (this->has_cluster()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->cluster_);
  }

  // .tensorflow.ConfigProto default_session_config = 4;
  if (this->has_default_session_config()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->default_session_config_);
  }

  // int32 task_index = 3;
  if (this->task_index() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->task_index());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ServerDef::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.ServerDef)
  GOOGLE_DCHECK_NE(&from, this);
  const ServerDef* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ServerDef>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.ServerDef)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.ServerDef)
    MergeFrom(*source);
  }
}

void ServerDef::MergeFrom(const ServerDef& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.ServerDef)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.job_name().size() > 0) {
    set_job_name(from.job_name());
  }
  if (from.protocol().size() > 0) {
    set_protocol(from.protocol());
  }
  if (from.has_cluster()) {
    mutable_cluster()->::tensorflow::ClusterDef::MergeFrom(from.cluster());
  }
  if (from.has_default_session_config()) {
    mutable_default_session_config()->::tensorflow::ConfigProto::MergeFrom(from.default_session_config());
  }
  if (from.task_index() != 0) {
    set_task_index(from.task_index());
  }
}

void ServerDef::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.ServerDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ServerDef::CopyFrom(const ServerDef& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.ServerDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ServerDef::IsInitialized() const {
  return true;
}

void ServerDef::Swap(ServerDef* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    ServerDef* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void ServerDef::UnsafeArenaSwap(ServerDef* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void ServerDef::InternalSwap(ServerDef* other) {
  job_name_.Swap(&other->job_name_);
  protocol_.Swap(&other->protocol_);
  std::swap(cluster_, other->cluster_);
  std::swap(default_session_config_, other->default_session_config_);
  std::swap(task_index_, other->task_index_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ServerDef::GetMetadata() const {
  protobuf_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_tensorflow_2fcore_2fprotobuf_2ftensorflow_5fserver_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ServerDef

// .tensorflow.ClusterDef cluster = 1;
bool ServerDef::has_cluster() const {
  return this != internal_default_instance() && cluster_ != NULL;
}
void ServerDef::clear_cluster() {
  if (GetArenaNoVirtual() == NULL && cluster_ != NULL) delete cluster_;
  cluster_ = NULL;
}
const ::tensorflow::ClusterDef& ServerDef::cluster() const {
  // @@protoc_insertion_point(field_get:tensorflow.ServerDef.cluster)
  return cluster_ != NULL ? *cluster_
                         : *::tensorflow::ClusterDef::internal_default_instance();
}
::tensorflow::ClusterDef* ServerDef::mutable_cluster() {
  
  if (cluster_ == NULL) {
    _slow_mutable_cluster();
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.ServerDef.cluster)
  return cluster_;
}
::tensorflow::ClusterDef* ServerDef::release_cluster() {
  // @@protoc_insertion_point(field_release:tensorflow.ServerDef.cluster)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_cluster();
  } else {
    ::tensorflow::ClusterDef* temp = cluster_;
    cluster_ = NULL;
    return temp;
  }
}
 void ServerDef::set_allocated_cluster(::tensorflow::ClusterDef* cluster) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete cluster_;
  }
  if (cluster != NULL) {
    _slow_set_allocated_cluster(message_arena, &cluster);
  }
  cluster_ = cluster;
  if (cluster) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.ServerDef.cluster)
}

// string job_name = 2;
void ServerDef::clear_job_name() {
  job_name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
const ::std::string& ServerDef::job_name() const {
  // @@protoc_insertion_point(field_get:tensorflow.ServerDef.job_name)
  return job_name_.Get();
}
void ServerDef::set_job_name(const ::std::string& value) {
  
  job_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.ServerDef.job_name)
}
void ServerDef::set_job_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  job_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.ServerDef.job_name)
}
void ServerDef::set_job_name(const char* value,
    size_t size) {
  
  job_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.ServerDef.job_name)
}
::std::string* ServerDef::mutable_job_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.ServerDef.job_name)
  return job_name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* ServerDef::release_job_name() {
  // @@protoc_insertion_point(field_release:tensorflow.ServerDef.job_name)
  
  return job_name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* ServerDef::unsafe_arena_release_job_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.ServerDef.job_name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return job_name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
void ServerDef::set_allocated_job_name(::std::string* job_name) {
  if (job_name != NULL) {
    
  } else {
    
  }
  job_name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), job_name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.ServerDef.job_name)
}
void ServerDef::unsafe_arena_set_allocated_job_name(
    ::std::string* job_name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (job_name != NULL) {
    
  } else {
    
  }
  job_name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      job_name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.ServerDef.job_name)
}

// int32 task_index = 3;
void ServerDef::clear_task_index() {
  task_index_ = 0;
}
::google::protobuf::int32 ServerDef::task_index() const {
  // @@protoc_insertion_point(field_get:tensorflow.ServerDef.task_index)
  return task_index_;
}
void ServerDef::set_task_index(::google::protobuf::int32 value) {
  
  task_index_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.ServerDef.task_index)
}

// .tensorflow.ConfigProto default_session_config = 4;
bool ServerDef::has_default_session_config() const {
  return this != internal_default_instance() && default_session_config_ != NULL;
}
void ServerDef::clear_default_session_config() {
  if (GetArenaNoVirtual() == NULL && default_session_config_ != NULL) delete default_session_config_;
  default_session_config_ = NULL;
}
const ::tensorflow::ConfigProto& ServerDef::default_session_config() const {
  // @@protoc_insertion_point(field_get:tensorflow.ServerDef.default_session_config)
  return default_session_config_ != NULL ? *default_session_config_
                         : *::tensorflow::ConfigProto::internal_default_instance();
}
::tensorflow::ConfigProto* ServerDef::mutable_default_session_config() {
  
  if (default_session_config_ == NULL) {
    _slow_mutable_default_session_config();
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.ServerDef.default_session_config)
  return default_session_config_;
}
::tensorflow::ConfigProto* ServerDef::release_default_session_config() {
  // @@protoc_insertion_point(field_release:tensorflow.ServerDef.default_session_config)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_default_session_config();
  } else {
    ::tensorflow::ConfigProto* temp = default_session_config_;
    default_session_config_ = NULL;
    return temp;
  }
}
 void ServerDef::set_allocated_default_session_config(::tensorflow::ConfigProto* default_session_config) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete default_session_config_;
  }
  if (default_session_config != NULL) {
    _slow_set_allocated_default_session_config(message_arena, &default_session_config);
  }
  default_session_config_ = default_session_config;
  if (default_session_config) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.ServerDef.default_session_config)
}

// string protocol = 5;
void ServerDef::clear_protocol() {
  protocol_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
const ::std::string& ServerDef::protocol() const {
  // @@protoc_insertion_point(field_get:tensorflow.ServerDef.protocol)
  return protocol_.Get();
}
void ServerDef::set_protocol(const ::std::string& value) {
  
  protocol_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.ServerDef.protocol)
}
void ServerDef::set_protocol(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  protocol_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.ServerDef.protocol)
}
void ServerDef::set_protocol(const char* value,
    size_t size) {
  
  protocol_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.ServerDef.protocol)
}
::std::string* ServerDef::mutable_protocol() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.ServerDef.protocol)
  return protocol_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* ServerDef::release_protocol() {
  // @@protoc_insertion_point(field_release:tensorflow.ServerDef.protocol)
  
  return protocol_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* ServerDef::unsafe_arena_release_protocol() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.ServerDef.protocol)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return protocol_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
void ServerDef::set_allocated_protocol(::std::string* protocol) {
  if (protocol != NULL) {
    
  } else {
    
  }
  protocol_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), protocol,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.ServerDef.protocol)
}
void ServerDef::unsafe_arena_set_allocated_protocol(
    ::std::string* protocol) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (protocol != NULL) {
    
  } else {
    
  }
  protocol_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      protocol, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.ServerDef.protocol)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)
