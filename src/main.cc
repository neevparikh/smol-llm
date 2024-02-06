#include "ggml.h"

int main(int argc, char **argv) {
  struct ggml_init_params params = {
      .mem_size = 16 * 1024 * 1024,
      .mem_buffer = NULL,
  };

  // memory allocation happens here
  struct ggml_context *ctx = ggml_init(params);

  struct ggml_tensor *x = ggml_new_tensor_1d(ctx, GGML_TYPE_F32, 1);

  ggml_set_param(ctx, x); // x is an input variable

  struct ggml_tensor *a = ggml_new_tensor_1d(ctx, GGML_TYPE_F32, 1);
  struct ggml_tensor *b = ggml_new_tensor_1d(ctx, GGML_TYPE_F32, 1);
  struct ggml_tensor *x2 = ggml_mul(ctx, x, x);
  struct ggml_tensor *f = ggml_add(ctx, ggml_mul(ctx, a, x2), b);
  return 0;
}
