// Author : Akide Liu 
// Date : 24/8/21
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


using namespace std;

extern void hexDigits(int *numbers, int length);

TEST(week5_workshop,function_2_1){

    // vector<int> array;
    //
    // for (int i = 0; i < 16; ++i) {
    //     array.push_back(i);
    // }
    //
    // int *array_ptr = &array[0];

    int *array_ptr = new int[15];

    for (int i = 0; i < 16; ++i) {

        fmt::print(" {} ", i);
        array_ptr[i] = i;
    }

    hexDigits(array_ptr, 16);

}

extern int *reverseArray(int *numbers1,int length) ;

TEST(week5_workshop,function_3_1){

    vector<int> array = {1, 2, 3, 4, 5};

    int *result = reverseArray(&array[0], array.size());

    for (int i = 0; i < array.size(); ++i) {
        cout << result[i];
    }


}

extern int secondSmallestSum(int *numbers,int length) ;

TEST(week5_workshop,function_4_1){

    int array[4] = {1, 2, 3, 4};

    cout << secondSmallestSum(array, 4) << endl;

}

extern int *sparse_count(int **vals, int num_rows, int num_cols);

TEST(week5_workshop,function_4_2){
    int row1[] = {10, 15, 0};
    int row2[] = {0, 5, 73};
    int row3[] = {0, 0, 1};

    int *vals[] = {row1, row2, row3};

    int *mm = sparse_count(vals, 3, 3);

    fmt::print("{} {}",mm[0],mm[1]);

}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
