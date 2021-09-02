// Author : Akide Liu 
// Date : 17/8/21
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
#include <climits>
#include <exception>
#include <random>

// test target :

using namespace std;

extern int size_of_variable_star_t();

TEST(week4_workshop,test_1_1){
    cout << size_of_variable_star_t() << endl;
    int a;
    cout << sizeof (a) << endl;
}

extern int size_of_variable_star_arr();

TEST(week4_workshop,test_1_2){

    // cout << size_of_variable_star_arr() << endl;


    int *arr = new int[3];

    arr[0] = 10;
    arr[1] = 20;
    // arr[2] = 30;

    cout << *(arr + 2) << endl;
}

extern int size_of_array_arr();

TEST(week4_workshop,test_1_3){

    cout << size_of_array_arr() << endl;

}

extern int maximum_sum(int *nums, int length);

int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN;
    int max_ending_here = 0;

    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

// 1-1
extern void copy_2d_strings(string first[][2], string second[][2], int n);

// generate random string
// https://stackoverflow.com/a/47978023
// https://inversepalindrome.com/blog/how-to-create-a-random-string-in-cpp

string random_string()
{
    std::string str("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");

    std::random_device rd;
    std::mt19937 generator(rd());

    std::shuffle(str.begin(), str.end(), generator);

    return str.substr(0, 5);    // assumes 32 < number of characters in str
}

//NOLINT : https://www.programmersought.com/article/77252032600/

TEST(prac4,q1_1) /* NOLINT */ {
    int n = 3;
    string first_array[3][2] = {};
    string second_array[3][2] = {};

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 2; ++j) {
            // first_array[i][j] = rand() % 10;
            first_array[i][j] = random_string();
        }
    }

    copy_2d_strings(first_array, second_array, n);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 2; ++j) {
            EXPECT_EQ(first_array[i][j],second_array[i][j]);
        }
    }
}

TEST(week4_prac,test_2_2){
    int n = 10;

    int *arr = new int[n];
    int number = -1;
    for (int i = 0; i < n; ++i) {
        arr[i] = number;
        number--;
    }

    EXPECT_EQ(maximum_sum(arr,n),0);

    srand(time(NULL));

    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 200 - 100; // -100 -99
    }

    EXPECT_EQ(maximum_sum(arr,n),maxSubArraySum(arr,n));


}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
