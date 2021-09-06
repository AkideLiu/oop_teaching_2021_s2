include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/
) # including .h header in current directory (sub directory) (do not modify)

conan_basic_setup() # conan support

add_executable(week7-group # your sub-project name
        ../Test/week7-group-test.cpp
        Musician.cpp Musician.h Orchestra.cpp Orchestra.h)


target_link_libraries(week7-group # must identical to sub-project name
        ${CONAN_LIBS} # include CONAN libs which defined in root level Cmake
        )
