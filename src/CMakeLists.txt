

add_executable(
   fstream_test
   "${CMAKE_CURRENT_SOURCE_DIR}/fstream_test.cpp"
)
target_compile_definitions(fstream_test PUBLIC "-D_POSIX_C_SOURCE=1" "-DYY_NO_INPUT")