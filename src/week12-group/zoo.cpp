// Author : Akide Liu 
// Date : 25/10/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include "zoo.h"

zoo::zoo(string n, int cows, int lions) {
    this->name = n;

    for (int i = 0; i < cows; ++i) {
        this->collection.push_back(new hunter("Daisy", 100));
    }

    for (int i = 0; i < lions; ++i) {
        this->collection.push_back(new vegie("Clarence", 100));
    }



    // vector -> pointer Array
    this->animals = &collection[0];

    this->number_of_animals = cows + lions;

    if (this->number_of_animals != collection.size()) {
        cerr << "error zoo :: this->number_of_animals != collection.size()" << endl;
    }

}

const string &zoo::getName() const {
    return name;
}

int zoo::getNumberOfAnimals() const {
    return number_of_animals;
}

animal **zoo::getAnimals() const {
    return animals;
}


