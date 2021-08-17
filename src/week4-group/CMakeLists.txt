include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/
) # including .h header in current directory (sub directory) (do not modify)

conan_basic_setup() # conan support

add_executable(week4-group # your sub-project name
        ../Test/week4-group-test.cpp
        workshop/function-1-1.cpp function-1-1.cpp function-1-3.cpp function-1-4.cpp function-2-1.cpp function-2-2.cpp)


target_link_libraries(week4-group # must identical to sub-project name
        ${CONAN_LIBS} # include CONAN libs which defined in root level Cmake
        )
