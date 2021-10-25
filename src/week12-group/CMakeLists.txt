include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/
) # including .h header in current directory (sub directory) (do not modify)

conan_basic_setup() # conan support

add_executable(week12-group # your sub-project name
        ../Test/week12-group-test.cpp
        animal.cpp animal.h hunter.cpp hunter.h vegie.cpp vegie.h zoo.cpp zoo.h sort_by_animalID.cpp sort_by_animalID.h)


target_link_libraries(week12-group # must identical to sub-project name
        ${CONAN_LIBS} # include CONAN libs which defined in root level Cmake
        )
