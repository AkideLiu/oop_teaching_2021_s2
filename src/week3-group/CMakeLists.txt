include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/
) # including .h header in current directory (sub directory) (do not modify)

conan_basic_setup() # conan support

add_executable(week3-group # your sub-project name
        week3_pointer.cpp
        function-1-2.cpp ../Test/week3-group-test.cpp function-2-3.cpp)


target_link_libraries(week3-group # must identical to sub-project name
        ${CONAN_LIBS} # include CONAN libs which defined in root level Cmake
        )
