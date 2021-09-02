// Author : Akide Liu 
// Date : 2/9/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#ifndef OOP_TEACHING_2021_S2_ENCAPSULATION_H
#define OOP_TEACHING_2021_S2_ENCAPSULATION_H

#include <iostream>
using namespace std;

class Encapsulation {

public:
    int get_x();
    void set_x(int x);

private:
    int age = 5;

};


#endif //OOP_TEACHING_2021_S2_ENCAPSULATION_H
