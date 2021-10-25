// Author : Akide Liu 
// Date : 6/9/21
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
#include <ostream>


using namespace std;

class Object1{
    public:
    void func(int x){
        cout << "value of one int x is " << x << endl;
    }

    void func(double x){
        cout << "value of one double x is " << x << endl;
    }

    void func(int x, int y){
        cout << "sum of two integers x and y " << x + y << endl;
    }

};

TEST(week7_test,test1){

    Object1 obj1;

    obj1.func(7);

    obj1.func(9.123);

    obj1.func(1, 2);

}

class Complex {

    private:
    int real{}, imag{};

    public:

    Complex(){};
    Complex(int m_real, int imag){
        real = m_real;
        this->imag = imag;
    }

    // this is automatically called when '+' is used with between two Complex Object.
    Complex operator + (Complex const &obj){

        Complex res;
        res.real = this->real + obj.real;
        res.imag = this->imag + obj.imag;

        return res;
    }

    friend ostream &operator<<(ostream &os, const Complex &complex) {
        os << "real: " << complex.real << " imag: " << complex.imag;
        return os;
    }

    void print(){
        cout << real << " + i" << imag << endl;
    }

};

TEST(week7_test,test2){

    Complex c1(10, 5), c2(2, 4);

    Complex c3 = c1 + c2;

    // c3.print();
    //
    cout << c3 << endl;

}


class Base{
    public:
    // 2. the function declared in the base class must be virtual
    virtual void print(){
        cout << "print base class" << endl;
    }

    void show(){
        cout << "show base class" << endl;
    }
};


class Derived : public Base {

    // 3. use override keyword in derived class
    void print() override {
        cout << "print derived class" << endl;
    }

    void show(){
        cout << "show derived class" << endl;
    }


};

TEST(week7_test,test3){

    // 1. the point of base class points to derived class
    Base * ptr = new Derived();

    // virtual function, binded at runtime (Runtime Polymorphism)
    ptr->print();

    // non-virtual function, binded at compile time;
    ptr->show();

}

class Shape{
    public:
    Shape(int l, int w){
        length = l;
        width = w;
    }

    virtual int get_area(){
        cout << "This is call to Shape class area" << endl;
    };

    protected:
    int length, width;
};

class Square : public Shape{

public:
    Square(int l = 0, int w = 0) : Shape(l,w){};

    int get_area() override {
        cout << "Square area : " << ((length == 0) ? (width * width) : (length * length)) << endl;
    }

};

class Rectangle : public Shape{
    public:
    Rectangle(int l = 0, int w = 0) : Shape(l,w){};
    int get_area() override{
        cout << "Rectangle area : " << length * width << endl;
    }
};

TEST(week7_test,test4){

    // Shape *s;
    // Square sq(5,5);
    // Rectangle rec(4,5);
    //
    // s = &sq;
    // s->get_area(); //
    // s= &rec;
    // s->get_area(); //

    Shape *sq = new Square(5);
    Shape *rec = new Rectangle(4, 5);
    sq->get_area();
    rec->get_area();
};


// if a class include a pure virtual function that class is an abstract class
class BaseA{
private:
    int x = 10;
public:
    // pure virtual function.
    virtual void func() = 0;

    int getX(){
        return x;
    }

};

class DerivedA : public BaseA{
private:
    int y;
public:
    void func() override {
        cout << "func() called" << endl;
    }
};

TEST(week7_test,test5){

    // the abstract class can not be initialized
    // BaseA * a = new BaseA();

    BaseA * a = new DerivedA();
    a->func();
    cout << a->getX() << endl;

}

#include <Orchestra.h>
TEST(week7_test,test6){

    int size = 4;
    Orchestra *o = new Orchestra(size);

    vector<Musician> test_array;
    test_array.reserve(6);
    for (int i = 0; i < 6; ++i) {
        test_array.emplace_back("test", i);
    }

    test_array.emplace_back("null", 6);

    for (int i = 0; i < 6; ++i) {
        cout << "numbers of members :" <<  o->get_current_number_of_members() << endl;
        cout << "add_musician : " << o->add_musician(test_array[i]) << endl;
    }

    EXPECT_NE(test_array[0].get_instrument(),test_array[1].get_instrument());

    Musician *temp = o->get_members();
    for (int i = 0; i < size; ++i) {

        cout << temp[i] << endl;

    }

    delete o;


}





