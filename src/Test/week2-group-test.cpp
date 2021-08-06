// Author : Akide Liu 
// Date : 5/8/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

// helper :

#include <gtest/gtest.h>
#include <fmt/core.h>
#include <memory>
#include <dbg.h>
#include <cmath>
#include <algorithm>
#include <exception>

// test target :

using namespace std;

extern int diagonal(int array[4][4]);

TEST(week2,function_1_1){

    int array[4][4] = {};
    int number = 0;

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            array[i][j] = number;
            number++;
        }
    }


    number = diagonal(array);

    cout << number << endl;

}

extern void count_numbers(int array[4][4]);

TEST(week2,function_1_3){

    int array[4][4] = {};

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            array[i][j] = rand() % 10;
        }
    }

    count_numbers(array);


}

extern void print_scaled_matrix(int array[3][3], int scale);

TEST(week2,function_1_4){

    int scale = 3 ;
    int threebythree[3][3] = {{0,1,2},{3,4,5},{6,7,8}} ;
    print_scaled_matrix(threebythree,scale) ;

}

extern void print_summed_matrices(int array1[3][3], int array2[3][3]);

TEST(week2,function_1_5) {


    int matrix1[3][3] = {{0,1,2},{3,4,5},{6,7,8}} ;
    int matrix2[3][3] = {{0,0,0},{2,2,2},{-5,-4,8}} ;
    print_summed_matrices(matrix1,matrix2) ;

}

extern void print_as_binary(std::string decimal_number);

TEST(week2,function_2_1){

    print_as_binary("123");
    print_as_binary("6");

}

extern int binary_to_number(int binary_digits[], int number_of_digits);

TEST(week2,function_2_2){

    int array1[] = {1, 2, 1, 0, 1};
    int array2[] = {0, 0, 1, 1, 0};

    cout << binary_to_number(array1, 5) << endl;
    cout << binary_to_number(array2,5) << endl;

}

extern int sum_if_a_palindrome(int integers[], int length);

extern int sum_elements(int integers[], int length);

extern bool is_a_palindrome(int integers[], int length);

TEST(week2,function_2_3){

    int array1[] = {1, 2, 1, 0, 1};
    int array2[] = {1, 2, 2, 1};

    cout << is_a_palindrome(array1,5) << endl;
    cout << is_a_palindrome(array2,4) << endl;

    cout << sum_elements(array1, 5) << endl;
    cout << sum_elements(array2,4) << endl;

    cout << sum_if_a_palindrome(array1, 5) << endl;
    cout << sum_if_a_palindrome(array2,4) << endl;


}

extern int min_integer(int integers[], int length);

extern int sum_min_and_max(int integers[], int length);

extern int max_integer(int integers[], int length);

TEST(week2,function_2_4){

    int array1[] = {1, 2, 3, 4, 5};

    cout << min_integer(array1,5) << endl;

    cout << max_integer(array1, 5) << endl;

    cout << sum_min_and_max(array1, 5) << endl;

}