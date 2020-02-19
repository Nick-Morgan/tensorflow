/* Copyright 2017 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/


#ifndef TENSORFLOW_C_DLPACK_H_
#define TENSORFLOW_C_DLPACK_H_

#include "tensorflow/c/eager/c_api.h"
#include "tensorflow/core/framework/tensor.h"

namespace tensorflow {

const char* const kDlTensorCapsuleName = "dltensor";

void* TFE_HandleToDLPack(TFE_TensorHandle* h, TF_Status* status);

TFE_TensorHandle* TFE_HandleFromDLPack(void* dlm, TF_Status* status);

void TFE_CallDLManagedTensorDeleter(void* dlm_ptr);
}  // namespace tensorflow


#endif  // TENSORFLOW_C_DLPACK_H_
