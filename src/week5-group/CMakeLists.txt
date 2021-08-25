include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/
) # including .h header in current directory (sub directory) (do not modify)

conan_basic_setup() # conan support

add_executable(week5-group # your sub-project name
       ../Test/week5-group-test.cpp
        function-1-1.cpp function-2-1.cpp function-3-1.cpp function-3-2.cpp function-4-1.cpp function-4-2.cpp)


target_link_libraries(week5-group # must identical to sub-project name
        ${CONAN_LIBS} # include CONAN libs which defined in root level Cmake
        )
