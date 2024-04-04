#ifndef TVM_RUNTIME_CONTRIB_IMP_IMP_KERNEL_H_
#define TVM_RUNTIME_CONTRIB_IMP_IMP_KERNEL_H_

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include "/home/dut3kor/test/library/code/public/include/imp.h"
// #include "imp.h"

#define WIDTH 16
#define HEIGHT 16
namespace tvm {
namespace runtime {
namespace contrib {
extern "C" void imp_binary_op(int * data, int * weight, int * out, int algo_type,
                               std::vector<int64_t> shape);
// void imp_ops(uint32_t *A, uint32_t *B, uint32_t *C, int op_type);


}  // namespace contrib
}  // namespace runtime
}  // namespace tvm
#endif  // TVM_RUNTIME_CONTRIB_IMP_IMP_KERNEL_H_