// Author : Akide Liu 
// Date : 2/9/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include "Encapsulation.h"

int Encapsulation::get_x() {


    cout << "LOG : " << this << " Has been modified" << endl;

    return this->age;
}

void Encapsulation::set_x(int x) {

    if (x >= 0 & x <= 200){
        this->age = x;
    } else {
        cerr << x <<  " is not of range, can not be set" << endl;
    }

}
