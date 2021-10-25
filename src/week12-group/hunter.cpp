// Author : Akide Liu 
// Date : 25/10/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include "hunter.h"

hunter::hunter(string n, int v) : animal(n, v) {

    // animalID derived from base case
    // hunter::nextID -> static field
    this->animalID = hunter::nextID;

    hunter::nextID++;
}

int hunter::nextID = 1000;

int hunter::get_kills() {
    return this->kills;
}

void hunter::set_kills(int k) {
    this->kills = k;
}


// You need to define the get_name function for this class which returns the name of the hunter object, prefixed with the string "Hunter: ".
string hunter::get_name() {
    return "Hunter: " + this->name;
}
