include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/
) # including .h header in current directory (sub directory) (do not modify)

conan_basic_setup() # conan support

add_executable(week6-group # your sub-project name
        ../Test/week6-group-test.cpp
        Encapsulation.cpp Encapsulation.h
        meerkat.cpp
        person.cpp person.h cart.cpp cart.h aircraft.cpp aircraft.h)

target_link_libraries(week6-group # must identical to sub-project name
        ${CONAN_LIBS} # include CONAN libs which defined in root level Cmake
        )
