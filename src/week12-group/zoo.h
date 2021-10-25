// Author : Akide Liu 
// Date : 25/10/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#ifndef OOP_TEACHING_2021_S2_ZOO_H
#define OOP_TEACHING_2021_S2_ZOO_H

#include "hunter.h"
#include "vegie.h"
#include <vector>
#include <iostream>

class zoo {

public:
    zoo(string n,int cows,int lions);      // create a zoo with the given number of cows and lions


    const string &getName() const;

    int getNumberOfAnimals() const;

    animal **getAnimals() const;

private:
    string name ;                          // the zoo's name
    int number_of_animals ;                // the number of animals in the zoo
    animal **animals;                      // the zoo's animals

    vector<animal *> collection;           // the list

};


#endif //OOP_TEACHING_2021_S2_ZOO_H
