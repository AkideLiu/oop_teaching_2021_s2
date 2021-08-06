include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/
) # including .h header in current directory (sub directory) (do not modify)

conan_basic_setup() # conan support

add_executable(week2-group # your sub-project name
        ../Test/week2-group-test.cpp
        function-1-1.cpp
        function-1-2.cpp function-1-3.cpp function-1-4.cpp function-1-5.cpp function-2-1.cpp function-2-2.cpp function-2-3.cpp function-2-4.cpp)



target_link_libraries(week2-group # must identical to sub-project name
        ${CONAN_LIBS} # include CONAN libs which defined in root level Cmake
        )
