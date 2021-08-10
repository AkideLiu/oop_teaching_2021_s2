// Author : Akide Liu 
// Date : 10/8/21
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

extern void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents);

TEST(week3_group,q_1_2){

    string test_courses[4] = {"c1", "c2", "c3", "c4"};
    string test_students[4] = {"s1", "s2", "s3","s4"};

    int numberOfStudent = 4;

    int test_report_card[4][4] = {};
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            test_report_card[i][j] = rand() % 100 + 1;
        }
    }

    print_class(test_courses, test_students, test_report_card, numberOfStudent);



}