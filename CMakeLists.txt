cmake_minimum_required(VERSION 3.28)
project(
  SmolLLM
  VERSION 0.1
  DESCRIPTION "SmolLLM"
  LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(smol-llm src/main.cc)
target_compile_features(smol-llm PUBLIC cxx_std_20)
set_target_properties(smol-llm PROPERTIES CXX_EXTENSIONS OFF)

set(ENV{Torch_DIR} "lib/libtorch/share/cmake")
find_package(Torch REQUIRED)
target_link_libraries(smol-llm PUBLIC "${TORCH_LIBRARIES}")
target_include_directories(smol-llm PRIVATE "lib/libtorch/include")
