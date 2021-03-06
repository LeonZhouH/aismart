SUB_PATH := external/tensorflow/tensorflow/core

LOCAL_SRC_FILES +=  \
	$(SUB_PATH)/common_runtime/allocator_retry.cc \
	$(SUB_PATH)/common_runtime/bfc_allocator.cc \
	$(SUB_PATH)/common_runtime/build_graph_options.cc \
	$(SUB_PATH)/common_runtime/constant_folding.cc \
	$(SUB_PATH)/common_runtime/copy_tensor.cc \
	$(SUB_PATH)/common_runtime/costmodel_manager.cc \
	$(SUB_PATH)/common_runtime/debugger_state_interface.cc \
	$(SUB_PATH)/common_runtime/device.cc \
	$(SUB_PATH)/common_runtime/device_factory.cc \
	$(SUB_PATH)/common_runtime/device_mgr.cc \
	$(SUB_PATH)/common_runtime/device_set.cc \
	$(SUB_PATH)/common_runtime/direct_session.cc \
	$(SUB_PATH)/common_runtime/executor.cc \
	$(SUB_PATH)/common_runtime/function.cc \
	$(SUB_PATH)/common_runtime/graph_optimizer.cc \
	$(SUB_PATH)/common_runtime/graph_runner.cc \
	$(SUB_PATH)/common_runtime/local_device.cc \
	$(SUB_PATH)/common_runtime/memory_types.cc \
	$(SUB_PATH)/common_runtime/optimization_registry.cc \
	$(SUB_PATH)/common_runtime/parallel_concat_optimizer.cc \
	$(SUB_PATH)/common_runtime/process_function_library_runtime.cc \
	$(SUB_PATH)/common_runtime/process_util.cc \
	$(SUB_PATH)/common_runtime/renamed_device.cc \
	$(SUB_PATH)/common_runtime/rendezvous_mgr.cc \
	$(SUB_PATH)/common_runtime/resource_variable_read_optimizer.cc \
	$(SUB_PATH)/common_runtime/session.cc \
	$(SUB_PATH)/common_runtime/session_factory.cc \
	$(SUB_PATH)/common_runtime/session_options.cc \
	$(SUB_PATH)/common_runtime/session_state.cc \
	$(SUB_PATH)/common_runtime/shape_refiner.cc \
	$(SUB_PATH)/common_runtime/simple_graph_execution_state.cc \
	$(SUB_PATH)/common_runtime/simple_placer.cc \
	$(SUB_PATH)/common_runtime/stats_publisher_interface.cc \
	$(SUB_PATH)/common_runtime/step_stats_collector.cc \
	$(SUB_PATH)/common_runtime/threadpool_device.cc \
	$(SUB_PATH)/common_runtime/threadpool_device_factory.cc \
	$(SUB_PATH)/framework/allocation_description.pb.cc \
	$(SUB_PATH)/framework/allocation_description.pb_text.cc \
	$(SUB_PATH)/framework/allocator.cc \
	$(SUB_PATH)/framework/allocator_registry.cc \
	$(SUB_PATH)/framework/attr_value.pb.cc \
	$(SUB_PATH)/framework/attr_value.pb_text.cc \
	$(SUB_PATH)/framework/attr_value_util.cc \
	$(SUB_PATH)/framework/bfloat16.cc \
	$(SUB_PATH)/framework/cancellation.cc \
	$(SUB_PATH)/framework/common_shape_fns.cc \
	$(SUB_PATH)/framework/cost_graph.pb.cc \
	$(SUB_PATH)/framework/cost_graph.pb_text.cc \
	$(SUB_PATH)/framework/device_attributes.pb.cc \
	$(SUB_PATH)/framework/device_attributes.pb_text.cc \
	$(SUB_PATH)/framework/device_base.cc \
	$(SUB_PATH)/framework/fake_input.cc \
	$(SUB_PATH)/framework/function.cc \
	$(SUB_PATH)/framework/function.pb.cc \
	$(SUB_PATH)/framework/function.pb_text.cc \
	$(SUB_PATH)/framework/graph.pb.cc \
	$(SUB_PATH)/framework/graph.pb_text.cc \
	$(SUB_PATH)/framework/graph_def_util.cc \
	$(SUB_PATH)/framework/graph_transfer_info.pb.cc \
	$(SUB_PATH)/framework/graph_transfer_info.pb_text.cc \
	$(SUB_PATH)/framework/kernel_def.pb.cc \
	$(SUB_PATH)/framework/kernel_def.pb_text.cc \
	$(SUB_PATH)/framework/kernel_def_builder.cc \
	$(SUB_PATH)/framework/load_library.cc \
	$(SUB_PATH)/framework/log_memory.cc \
	$(SUB_PATH)/framework/log_memory.pb.cc \
	$(SUB_PATH)/framework/log_memory.pb_text.cc \
	$(SUB_PATH)/framework/lookup_interface.cc \
	$(SUB_PATH)/framework/memory_types.cc \
	$(SUB_PATH)/framework/node_def.pb.cc \
	$(SUB_PATH)/framework/node_def.pb_text.cc \
	$(SUB_PATH)/framework/node_def_builder.cc \
	$(SUB_PATH)/framework/node_def_util.cc \
	$(SUB_PATH)/framework/op.cc \
	$(SUB_PATH)/framework/op_def.pb.cc \
	$(SUB_PATH)/framework/op_def.pb_text.cc \
	$(SUB_PATH)/framework/op_def_builder.cc \
	$(SUB_PATH)/framework/op_def_util.cc \
	$(SUB_PATH)/framework/op_kernel.cc \
	$(SUB_PATH)/framework/op_segment.cc \
	$(SUB_PATH)/framework/reader_base.cc \
	$(SUB_PATH)/framework/reader_base.pb.cc \
	$(SUB_PATH)/framework/remote_fused_graph_execute_info.pb.cc \
	$(SUB_PATH)/framework/remote_fused_graph_execute_info.pb_text.cc \
	$(SUB_PATH)/framework/rendezvous.cc \
	$(SUB_PATH)/framework/resource_handle.cc \
	$(SUB_PATH)/framework/resource_handle.pb.cc \
	$(SUB_PATH)/framework/resource_handle.pb_text.cc \
	$(SUB_PATH)/framework/resource_mgr.cc \
	$(SUB_PATH)/framework/shape_inference.cc \
	$(SUB_PATH)/framework/step_stats.pb.cc \
	$(SUB_PATH)/framework/step_stats.pb_text.cc \
	$(SUB_PATH)/framework/summary.pb.cc \
	$(SUB_PATH)/framework/summary.pb_text.cc \
	$(SUB_PATH)/framework/tensor.cc \
	$(SUB_PATH)/framework/tensor.pb.cc \
	$(SUB_PATH)/framework/tensor.pb_text.cc \
	$(SUB_PATH)/framework/tensor_description.pb.cc \
	$(SUB_PATH)/framework/tensor_description.pb_text.cc \
	$(SUB_PATH)/framework/tensor_reference.cc \
	$(SUB_PATH)/framework/tensor_shape.cc \
	$(SUB_PATH)/framework/tensor_shape.pb.cc \
	$(SUB_PATH)/framework/tensor_shape.pb_text.cc \
	$(SUB_PATH)/framework/tensor_slice.cc \
	$(SUB_PATH)/framework/tensor_slice.pb.cc \
	$(SUB_PATH)/framework/tensor_slice.pb_text.cc \
	$(SUB_PATH)/framework/tensor_util.cc \
	$(SUB_PATH)/framework/tracking_allocator.cc \
	$(SUB_PATH)/framework/types.cc \
	$(SUB_PATH)/framework/types.pb.cc \
	$(SUB_PATH)/framework/types.pb_text.cc \
	$(SUB_PATH)/framework/unique_tensor_references.cc \
	$(SUB_PATH)/framework/variable.pb.cc \
	$(SUB_PATH)/framework/variant.cc \
	$(SUB_PATH)/framework/variant_tensor_data.cc \
	$(SUB_PATH)/framework/versions.cc \
	$(SUB_PATH)/framework/versions.pb.cc \
	$(SUB_PATH)/framework/versions.pb_text.cc \
	$(SUB_PATH)/graph/algorithm.cc \
	$(SUB_PATH)/graph/colors.cc \
	$(SUB_PATH)/graph/control_flow.cc \
	$(SUB_PATH)/graph/costmodel.cc \
	$(SUB_PATH)/graph/edgeset.cc \
	$(SUB_PATH)/graph/gradients.cc \
	$(SUB_PATH)/graph/graph.cc \
	$(SUB_PATH)/graph/graph_constructor.cc \
	$(SUB_PATH)/graph/graph_def_builder.cc \
	$(SUB_PATH)/graph/graph_partition.cc \
	$(SUB_PATH)/graph/mkl_layout_pass.cc \
	$(SUB_PATH)/graph/mkl_tfconversion_pass.cc \
	$(SUB_PATH)/graph/node_builder.cc \
	$(SUB_PATH)/graph/optimizer_cse.cc \
	$(SUB_PATH)/graph/quantize_training.cc \
	$(SUB_PATH)/graph/subgraph.cc \
	$(SUB_PATH)/graph/tensor_id.cc \
	$(SUB_PATH)/graph/validate.cc \
	$(SUB_PATH)/grappler/devices.cc \
	$(SUB_PATH)/grappler/grappler_item.cc \
	$(SUB_PATH)/grappler/grappler_item_builder.cc \
	$(SUB_PATH)/grappler/op_types.cc \
	$(SUB_PATH)/grappler/utils.cc \
	$(SUB_PATH)/kernels/avgpooling_op.cc \
	$(SUB_PATH)/kernels/bias_op.cc \
	$(SUB_PATH)/kernels/cast_op.cc \
	$(SUB_PATH)/kernels/cast_op_impl_bfloat.cc \
	$(SUB_PATH)/kernels/cast_op_impl_bool.cc \
	$(SUB_PATH)/kernels/cast_op_impl_complex128.cc \
	$(SUB_PATH)/kernels/cast_op_impl_complex64.cc \
	$(SUB_PATH)/kernels/cast_op_impl_double.cc \
	$(SUB_PATH)/kernels/cast_op_impl_float.cc \
	$(SUB_PATH)/kernels/cast_op_impl_half.cc \
	$(SUB_PATH)/kernels/cast_op_impl_int16.cc \
	$(SUB_PATH)/kernels/cast_op_impl_int32.cc \
	$(SUB_PATH)/kernels/cast_op_impl_int64.cc \
	$(SUB_PATH)/kernels/cast_op_impl_int8.cc \
	$(SUB_PATH)/kernels/cast_op_impl_uint16.cc \
	$(SUB_PATH)/kernels/cast_op_impl_uint8.cc \
	$(SUB_PATH)/kernels/concat_lib_cpu.cc \
	$(SUB_PATH)/kernels/concat_op.cc \
	$(SUB_PATH)/kernels/constant_op.cc \
	$(SUB_PATH)/kernels/conv_ops.cc \
	$(SUB_PATH)/kernels/conv_ops_using_gemm.cc \
	$(SUB_PATH)/kernels/cwise_op_add_1.cc \
	$(SUB_PATH)/kernels/cwise_op_mul_1.cc \
	$(SUB_PATH)/kernels/cwise_op_rsqrt.cc \
	$(SUB_PATH)/kernels/cwise_op_sub.cc \
	$(SUB_PATH)/kernels/cwise_ops_common.cc \
	$(SUB_PATH)/kernels/deep_conv2d.cc \
	$(SUB_PATH)/kernels/depthwise_conv_op.cc \
	$(SUB_PATH)/kernels/fifo_queue.cc \
	$(SUB_PATH)/kernels/fill_functor.cc \
	$(SUB_PATH)/kernels/function_ops.cc \
	$(SUB_PATH)/kernels/identity_op.cc \
	$(SUB_PATH)/kernels/lrn_op.cc \
	$(SUB_PATH)/kernels/matmul_op.cc \
	$(SUB_PATH)/kernels/maxpooling_op.cc \
	$(SUB_PATH)/kernels/no_op.cc \
	$(SUB_PATH)/kernels/ops_util.cc \
	$(SUB_PATH)/kernels/padding_fifo_queue.cc \
	$(SUB_PATH)/kernels/padding_fifo_queue_op.cc \
	$(SUB_PATH)/kernels/pooling_ops_common.cc \
	$(SUB_PATH)/kernels/queue_base.cc \
	$(SUB_PATH)/kernels/queue_ops.cc \
	$(SUB_PATH)/kernels/relu_op.cc \
	$(SUB_PATH)/kernels/reshape_op.cc \
	$(SUB_PATH)/kernels/resize_bilinear_op.cc \
	$(SUB_PATH)/kernels/shape_ops.cc \
	$(SUB_PATH)/kernels/softmax_op.cc \
	$(SUB_PATH)/kernels/split_lib_cpu.cc \
	$(SUB_PATH)/kernels/split_op.cc \
	$(SUB_PATH)/ops/array_ops.cc \
	$(SUB_PATH)/ops/data_flow_ops.cc \
	$(SUB_PATH)/ops/function_ops.cc \
	$(SUB_PATH)/ops/functional_ops.cc \
	$(SUB_PATH)/ops/image_ops.cc \
	$(SUB_PATH)/ops/math_ops.cc \
	$(SUB_PATH)/ops/nn_ops.cc \
	$(SUB_PATH)/ops/no_op.cc \
	$(SUB_PATH)/platform/cpu_feature_guard.cc \
	$(SUB_PATH)/platform/cpu_info.cc \
	$(SUB_PATH)/platform/denormal.cc \
	$(SUB_PATH)/platform/env.cc \
	$(SUB_PATH)/platform/env_time.cc \
	$(SUB_PATH)/platform/file_system.cc \
	$(SUB_PATH)/platform/protobuf_util.cc \
	$(SUB_PATH)/platform/setround.cc \
	$(SUB_PATH)/platform/tensor_coding.cc \
	$(SUB_PATH)/platform/tracing.cc \
	$(SUB_PATH)/platform/variant_coding.cc \
	$(SUB_PATH)/protobuf/cluster.pb.cc \
	$(SUB_PATH)/protobuf/cluster.pb_text.cc \
	$(SUB_PATH)/protobuf/config.pb.cc \
	$(SUB_PATH)/protobuf/config.pb_text.cc \
	$(SUB_PATH)/protobuf/debug.pb.cc \
	$(SUB_PATH)/protobuf/debug.pb_text.cc \
	$(SUB_PATH)/protobuf/device_properties.pb.cc \
	$(SUB_PATH)/protobuf/meta_graph.pb.cc \
	$(SUB_PATH)/protobuf/named_tensor.pb.cc \
	$(SUB_PATH)/protobuf/queue_runner.pb.cc \
	$(SUB_PATH)/protobuf/rewriter_config.pb.cc \
	$(SUB_PATH)/protobuf/rewriter_config.pb_text.cc \
	$(SUB_PATH)/protobuf/saver.pb.cc \
	$(SUB_PATH)/protobuf/saver.pb_text.cc \
	$(SUB_PATH)/protobuf/tensor_bundle.pb.cc \
	$(SUB_PATH)/protobuf/tensor_bundle.pb_text.cc \
	$(SUB_PATH)/protobuf/tensorflow_server.pb.cc \
	$(SUB_PATH)/util/bcast.cc \
	$(SUB_PATH)/util/command_line_flags.cc \
	$(SUB_PATH)/util/cuda_kernel_helper_test.cu.cc \
	$(SUB_PATH)/util/device_name_utils.cc \
	$(SUB_PATH)/util/env_var.cc \
	$(SUB_PATH)/util/equal_graph_def.cc \
	$(SUB_PATH)/util/event.pb.cc \
	$(SUB_PATH)/util/guarded_philox_random.cc \
	$(SUB_PATH)/util/matmul_autotune.cc \
	$(SUB_PATH)/util/memmapped_file_system.cc \
	$(SUB_PATH)/util/memmapped_file_system.pb.cc \
	$(SUB_PATH)/util/memmapped_file_system.pb_text.cc \
	$(SUB_PATH)/util/memmapped_file_system_writer.cc \
	$(SUB_PATH)/util/mirror_pad_mode.cc \
	$(SUB_PATH)/util/padding.cc \
	$(SUB_PATH)/util/port.cc \
	$(SUB_PATH)/util/reporter.cc \
	$(SUB_PATH)/util/saved_tensor_slice.pb.cc \
	$(SUB_PATH)/util/saved_tensor_slice.pb_text.cc \
	$(SUB_PATH)/util/saved_tensor_slice_util.cc \
	$(SUB_PATH)/util/stat_summarizer.cc \
	$(SUB_PATH)/util/strided_slice_op.cc \
	$(SUB_PATH)/util/tensor_format.cc \
	$(SUB_PATH)/util/tensor_slice_reader.cc \
	$(SUB_PATH)/util/tensor_slice_reader_cache.cc \
	$(SUB_PATH)/util/tensor_slice_set.cc \
	$(SUB_PATH)/util/tensor_slice_writer.cc \
	$(SUB_PATH)/util/test_log.pb.cc \
	$(SUB_PATH)/util/use_cudnn.cc \
	$(SUB_PATH)/util/util.cc \
	$(SUB_PATH)/util/work_sharder.cc \
	$(SUB_PATH)/grappler/clusters/cluster.cc \
	$(SUB_PATH)/grappler/clusters/utils.cc \
	$(SUB_PATH)/grappler/clusters/virtual_cluster.cc \
	$(SUB_PATH)/grappler/costs/analytical_cost_estimator.cc \
	$(SUB_PATH)/grappler/costs/graph_memory.cc \
	$(SUB_PATH)/grappler/costs/graph_properties.cc \
	$(SUB_PATH)/grappler/costs/measuring_cost_estimator.cc \
	$(SUB_PATH)/grappler/costs/op_level_cost_estimator.cc \
	$(SUB_PATH)/grappler/costs/op_performance_data.pb.cc \
	$(SUB_PATH)/grappler/costs/robust_stats.cc \
	$(SUB_PATH)/grappler/costs/utils.cc \
	$(SUB_PATH)/grappler/costs/virtual_placer.cc \
	$(SUB_PATH)/grappler/costs/virtual_scheduler.cc \
	$(SUB_PATH)/grappler/inputs/utils.cc \
	$(SUB_PATH)/grappler/optimizers/auto_parallel.cc \
	$(SUB_PATH)/grappler/optimizers/constant_folding.cc \
	$(SUB_PATH)/grappler/optimizers/graph_rewriter.cc \
	$(SUB_PATH)/grappler/optimizers/layout_optimizer.cc \
	$(SUB_PATH)/grappler/optimizers/memory_optimizer.cc \
	$(SUB_PATH)/grappler/optimizers/meta_optimizer.cc \
	$(SUB_PATH)/grappler/optimizers/model_pruner.cc \
	$(SUB_PATH)/grappler/optimizers/static_schedule.cc \
	$(SUB_PATH)/grappler/utils/scc.cc \
	$(SUB_PATH)/grappler/utils/topological_sort.cc \
	$(SUB_PATH)/lib/core/arena.cc \
	$(SUB_PATH)/lib/core/bitmap.cc \
	$(SUB_PATH)/lib/core/coding.cc \
	$(SUB_PATH)/lib/core/error_codes.pb.cc \
	$(SUB_PATH)/lib/core/error_codes.pb_text.cc \
	$(SUB_PATH)/lib/core/status.cc \
	$(SUB_PATH)/lib/core/stringpiece.cc \
	$(SUB_PATH)/lib/core/threadpool.cc \
	$(SUB_PATH)/lib/hash/crc32c.cc \
	$(SUB_PATH)/lib/hash/crc32c_accelerate.cc \
	$(SUB_PATH)/lib/hash/hash.cc \
	$(SUB_PATH)/lib/histogram/histogram.cc \
	$(SUB_PATH)/lib/io/block.cc \
	$(SUB_PATH)/lib/io/block_builder.cc \
	$(SUB_PATH)/lib/io/buffered_inputstream.cc \
	$(SUB_PATH)/lib/io/compression.cc \
	$(SUB_PATH)/lib/io/format.cc \
	$(SUB_PATH)/lib/io/inputbuffer.cc \
	$(SUB_PATH)/lib/io/inputstream_interface.cc \
	$(SUB_PATH)/lib/io/iterator.cc \
	$(SUB_PATH)/lib/io/path.cc \
	$(SUB_PATH)/lib/io/random_inputstream.cc \
	$(SUB_PATH)/lib/io/table.cc \
	$(SUB_PATH)/lib/io/table_builder.cc \
	$(SUB_PATH)/lib/io/two_level_iterator.cc \
	$(SUB_PATH)/lib/monitoring/collection_registry.cc \
	$(SUB_PATH)/lib/random/distribution_sampler.cc \
	$(SUB_PATH)/lib/random/random.cc \
	$(SUB_PATH)/lib/random/simple_philox.cc \
	$(SUB_PATH)/lib/random/weighted_picker.cc \
	$(SUB_PATH)/lib/strings/base64.cc \
	$(SUB_PATH)/lib/strings/numbers.cc \
	$(SUB_PATH)/lib/strings/ordered_code.cc \
	$(SUB_PATH)/lib/strings/proto_text_util.cc \
	$(SUB_PATH)/lib/strings/scanner.cc \
	$(SUB_PATH)/lib/strings/str_util.cc \
	$(SUB_PATH)/lib/strings/strcat.cc \
	$(SUB_PATH)/lib/strings/stringprintf.cc \
	$(SUB_PATH)/lib/wav/wav_io.cc \
	$(SUB_PATH)/platform/default/gpu_tracer.cc \
	$(SUB_PATH)/platform/default/logging.cc \
	$(SUB_PATH)/platform/default/protobuf.cc \
	$(SUB_PATH)/platform/default/tracing.cc \
	$(SUB_PATH)/platform/hadoop/hadoop_file_system.cc \
	$(SUB_PATH)/platform/posix/env.cc \
	$(SUB_PATH)/platform/posix/env_time.cc \
	$(SUB_PATH)/platform/posix/error.cc \
	$(SUB_PATH)/platform/posix/load_library.cc \
	$(SUB_PATH)/platform/posix/net.cc \
	$(SUB_PATH)/platform/posix/port.cc \
	$(SUB_PATH)/platform/posix/posix_file_system.cc \
	$(SUB_PATH)/platform/posix/subprocess.cc \
	$(SUB_PATH)/platform/posix/tracing.cc \
	$(SUB_PATH)/util/ctc/ctc_loss_calculator.cc \
	$(SUB_PATH)/util/sparse/group_iterator.cc \
	$(SUB_PATH)/util/tensor_bundle/naming.cc \
	$(SUB_PATH)/util/tensor_bundle/tensor_bundle.cc