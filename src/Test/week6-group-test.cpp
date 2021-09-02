// Author : Akide Liu 
// Date : 2/9/21
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

TEST(week6,test){
    cout << "test" << endl;
}

#include <Encapsulation.h>

TEST(week6,Encapsulation){
    Encapsulation *e = new Encapsulation();

    cout << e->get_x() << endl;

    // e->x = 1000;

    e->set_x(1000);


    cout << e->get_x() << endl;
}

#include <meerkat.h>

string random_string()
{
    std::string str("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");

    std::random_device rd;
    std::mt19937 generator(rd());

    std::shuffle(str.begin(), str.end(), generator);

    return str.substr(0, 5);    // assumes 32 < number of characters in str
}

TEST(week6,q1_1){
    vector<meerkat> obj_array(4);
    vector<string> name_array;
    vector<int> age_array;

    srand(time(nullptr));

    for (int i = 0; i < 4; ++i) {
        name_array.push_back(random_string());
        age_array.push_back(rand() % 80 + 10);

        obj_array[i].setName(name_array[i]);
        obj_array[i].setAge(age_array[i]);

    }

    for (int i = 0; i < 4; ++i) {
        EXPECT_EQ(obj_array[i].getName(), name_array[i]);
        EXPECT_EQ(obj_array[i].getAge(), age_array[i]);

    }

}

#include <person.h>

TEST(week6,q1_2){

    vector<person> obj_array;
    vector<string> name_array;
    vector<int> salary_array;

    srand(time(nullptr));

    for (int i = 0; i < 4; ++i) {
        name_array.push_back(random_string());
        salary_array.push_back(rand() % 9000 + 1000);

        if (i % 2 == 0) {
            obj_array.emplace_back(name_array[i], salary_array[i]);
        } else {
            obj_array.emplace_back();
            obj_array[i].setName(name_array[i]);
            obj_array[i].setSalary(salary_array[i]);
        }

    }

    for (int i = 0; i < 4; ++i) {
        EXPECT_EQ(obj_array[i].getName(), name_array[i]);
        EXPECT_EQ(obj_array[i].getSalary(),salary_array[i]);
    }

}

#include <aircraft.h>

TEST(week7,q2_2_1){

    vector<person> obj_array;
    vector<string> name_array;
    vector<int> salary_array;

    srand(time(nullptr));

    for (int i = 0; i < 4; ++i) {
        name_array.push_back(random_string());
        salary_array.push_back(rand() % 9000 + 1000);

        if (i % 2 == 0) {
            obj_array.emplace_back(name_array[i], salary_array[i]);
        } else {
            obj_array.emplace_back();
            obj_array[i].setName(name_array[i]);
            obj_array[i].setSalary(salary_array[i]);
        }

    }

    string callsign = "aircraft1";

    aircraft aircraft1(callsign, obj_array[0], obj_array[1]);

    EXPECT_EQ(aircraft1.getPilot().getName(), obj_array[0].getName());
    EXPECT_EQ(aircraft1.getCoPilot().getName(), obj_array[1].getName());


    aircraft1.setPilot(obj_array[2]);
    aircraft1.setCoPilot(obj_array[0]);

    testing::internal::CaptureStdout();
    aircraft1.printDetails();
    string output = testing::internal::GetCapturedStdout();

    vector<string> arr;
    stringstream ss(output);
    string final_output;
    while (getline(ss, final_output, '\n')) {
        arr.push_back(final_output);
    }

    EXPECT_EQ(arr[0],callsign);
    EXPECT_EQ(arr[1],obj_array[2].getName());
    EXPECT_EQ(arr[2],obj_array[0].getName());


}