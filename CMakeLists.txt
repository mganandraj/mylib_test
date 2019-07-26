# CMakeList.txt : CMake project for mylib_test, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
ADD_LIBRARY (mylib_test "mylib_test.cpp" "include/mylib_test.h")

install(TARGETS mylib_test
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib/static)

install(DIRECTORY include/ DESTINATION include/)
