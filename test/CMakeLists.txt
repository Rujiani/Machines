add_executable(test test.cpp)

find_package(gtest)

target_link_libraries(test gtest gtest_main)
target_link_libraries(test Mealy)

add_compile_options(test -std=c++23)