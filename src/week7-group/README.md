# Week 7 OOP

## Polymorphism in C++

![img](https://minio.llycloud.com/image/uPic/image-202109062NtGDF.png)

## 2 type of polymorphisms

 1. ### compile time polymorphism

    **Function overloading** : when there are multiple functions with **same** name but different **parameters** then these functions are said to be overloaded .

    ```c++
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
    ```

    in the above example, a single function named func acts differently in theree different situations which is the property of polymorphism.

    **Operator overloading** : C++ also provide option to overload operators. for example, we can make the operator ('+') for string class to concatenate two strings. we know that this is the addition operator whose taks is to add two operands.  so a single operator '+' when placed between integer oprands. adds them and when placed between string operands, concatenates them.

    

    ```c++
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
    ```

    

    In the above example the operator '+' is overloaded. The operator '+' is an addition operator and can add two numbers (integers or floating point) but here the operator is made to perform addition of two imagery or complex numbers.

 2. ### run time polymorphism 

    **Function overriding** on the other hand occurs when a Derived class has a definition for one of the member functions of the Base class. The Base function is said to be overridden.

    ```c++
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
    ```
    
    

## run time polymorphism example

1. the point of base class points to derived class cs 
2. the function declared in the base class must be virtual 
3. use override keyword in derived class

```c++
class Shape{
    public:
    Shape(int l, int w){
        length = l;
        width = w;
    }

    virtual int get_area(){
        cout << "This is call to Shape class area" << endl;
    }

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

    Shape *sq = new Square(5, 5);
    Shape *rec = new Rectangle(4, 5);
    sq->get_area();
    rec->get_area();
};
```





## Abstraction

sometimes implementation of all functions cannot be provided in a base class because we don't know the implementation. Scuh a class is called **abstract class**. For example, let shape be a base class. we cannot provide implementation of func `get_area` in the Shape. but we know every derived class must have implementation of `get_area()` . Similarly an Person class doesn't provide the `doAction`.

We **can not** create objects of abstract classes. A **pure virtual** function (or abstract function ) in c++ is a virtual function for which we can have implementation, but we must override that function in derived class, otherwise the derived class will also because abstract class.

A **pure function** is declared by assigning 0 in the declaration.

```c++
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
```



##  