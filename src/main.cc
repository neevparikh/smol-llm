#include <fmt>
#include <torch/torch.h>

int main(int argc, char **argv) {
  torch::Tensor tensor = torch::rand({2, 3});
  fmt::println(tensor);
  return 0;
}
