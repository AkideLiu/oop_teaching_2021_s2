// Author : Akide Liu 
// Date : 2/9/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include "person.h"

person::person(string myName, int Salary) {
    this->name = myName;
    this->salary = Salary;
}

void person::setName(string myName) {
    this->name = myName;
}

string person::getName() {
    return this->name;
}

void person::setSalary(int mySalary) {
    this->salary = mySalary;
}

int person::getSalary() {
    return this->salary;
}

person::person() = default;
