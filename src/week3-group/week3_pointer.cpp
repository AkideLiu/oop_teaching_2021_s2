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

TEST(week3,test){
    cout << "hello " << endl;
}

// "Regular" variables

TEST(week3, pointers_1){


    // int number = 3 ;

    // declaration
    int number;

    // assignment
    number = 3;
    number ++;
    number = number *2;

    cout << number << endl;
    // & operator to get memory address
    cout << " address : " << &number << endl;

}

TEST(week3, pointers_2){

    // int number = 3 ;

    // declaration
    int number;

    // assignment
    number = 3;
    number ++;
    number = number *2;

    cout << number << endl;
    // & operator to get memory address
    // stack
    cout << " address : " << &number << endl;

    int *numberPointer;
    numberPointer = &number;
    // stack
    cout << "Pointer : " << numberPointer << endl;

    cout << "value from pointer : " << *numberPointer << endl;

}

TEST(week3,pointers_3){

    // stack
    int number =3;

    // new ->> refer allocation on heap.
    int *numbersPointer = new int[number];

}

void setNumber(int x){

    cout << &x << endl;
    x = 5;
}

TEST(week3,pointers_4){

    int x = 3;
    setNumber(x);

    cout << "x : " << x << endl;

}

void setNumberAddress(int &x){
    x = 5;
}

void foo(int x){
    cout << x << endl ;
}

void foo(double x){
    cout << x;
}

void foo(string x){

    cout << x;
}

TEST(week3,overload){
    foo(1);
    foo(1.5);
    foo("test");
}

TEST(week3,pointers_5){

    int x = 3;
    setNumberAddress(x);

    cout << "x : " << x << endl;

}

void setNumberPointer(int *x){
    *x = 5;
}

TEST(week3,pointers_6){

    int x = 3; // 1. x=3
    setNumberPointer(&x); // 2. function parameter x -> int *x = function argument -> &x

    cout << "x : " << x << endl;

}
