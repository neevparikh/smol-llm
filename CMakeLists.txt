cmake_minimum_required(VERSION 3.28)
project(
  SmolLLM
  VERSION 0.1
  DESCRIPTION "SmolLLM"
  LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(smol-llm src/main.cc)
target_compile_features(smol-llm PUBLIC cxx_std_23)
set_target_properties(smol-llm PROPERTIES CXX_EXTENSIONS OFF)

add_subdirectory(lib/ggml)
target_link_libraries(smol-llm PUBLIC ggml)
target_include_directories(smol-llm PRIVATE "lib/ggml" "lib/ggml/include")
