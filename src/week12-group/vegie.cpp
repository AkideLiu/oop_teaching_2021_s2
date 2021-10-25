// Author : Akide Liu 
// Date : 25/10/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include "vegie.h"

int vegie::nextID = 100;

vegie::vegie(string n, int v) : animal(n, v) {

    this->animalID = vegie::nextID;

    vegie::nextID++;

}

const string &vegie::getFavouriteFood() const {
    return favourite_food;
}

void vegie::setFavouriteFood(const string &favouriteFood) {
    favourite_food = favouriteFood;
}

string vegie::get_name() {
    return "Safe: " + this->name;
}
