include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/
) # including .h header in current directory (sub directory) (do not modify)

conan_basic_setup() # conan support

add_executable(week1-group-public-q1-1 # your sub-project name
        function-1-1.cpp
        main-1-1.cpp)
add_executable(week1-group-public-q1-2 # your sub-project name
        function-1-2.cpp
        main-1-2.cpp)
add_executable(week1-group-public-q1-3 # your sub-project name
        function-1-3.cpp
        main-1-3.cpp)
add_executable(week1-group-public-q1-4 # your sub-project name
        function-1-4.cpp
        main-1-4.cpp)
add_executable(week1-group-public-q1-5 # your sub-project name
        function-1-5.cpp
        main-1-5.cpp)
add_executable(week1-group-public-q2-1 # your sub-project name
        function-2-1.cpp
        main-2-1.cpp)
add_executable(week1-group-public-q2-2 # your sub-project name
        function-2-2.cpp
        main-2-2.cpp)
add_executable(week1-group-public-q2-3 # your sub-project name
        function-2-3.cpp
        main-2-3.cpp)
add_executable(week1-group-public-q2-4 # your sub-project name
        function-2-4.cpp
        main-2-4.cpp)
add_executable(week1-group-public-q2-5 # your sub-project name
        function-2-5.cpp
        main-2-5.cpp)
add_executable(week1-group-public-q3-1 # your sub-project name
        function-3-1.cpp
        main-3-1.cpp)
add_executable(week1-group-public-q3-2 # your sub-project name
        function-3-2.cpp
        main-3-2.cpp)
add_executable(week1-group-public-q3-3 # your sub-project name
        function-3-3.cpp
        main-3-3.cpp)
add_executable(week1-group-public-q3-4 # your sub-project name
        function-3-4.cpp
        main-3-4.cpp)
add_executable(week1-group-public-q3-5 # your sub-project name
        function-3-5.cpp
        main-3-5.cpp)




target_link_libraries(AVLTree # must identical to sub-project name
        ${CONAN_LIBS} # include CONAN libs which defined in root level Cmake
        )
