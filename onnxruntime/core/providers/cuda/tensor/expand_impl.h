// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include <stdint.h>
#include "core/providers/cuda/shared_inc/cuda_utils.h"
#include "core/framework/data_types.h"
#include "core/common/common.h"

namespace onnxruntime {
namespace cuda {

Status ExpandImpl(
    const size_t element_size,
    const int N_output,
    const int N_input,
    const void* input_data,
    void* output_data,
    CudaAsyncBuffer<fast_divmod>& fdm_output_strides, 
    CudaAsyncBuffer<int64_t>& input_view_strides);


}  // namespace cuda
}  // namespace onnxruntime
