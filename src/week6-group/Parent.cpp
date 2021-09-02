// Author : Akide Liu 
// Date : 2/9/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>
using namespace std;

class Parent {
    public:
        int id_p;
};

class Child : public Parent {
    public:
        int id_c;
};

int main(){
    Child obj1;
    obj1.id_c = 7;
    obj1.id_p = 91;

    cout << "Child id is " << obj1.id_c << endl;
    cout << "Parent id is " << obj1.id_p << endl;
}

