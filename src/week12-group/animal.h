// Author : Akide Liu 
// Date : 25/10/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#ifndef OOP_TEACHING_2021_S2_ANIMAL_H
#define OOP_TEACHING_2021_S2_ANIMAL_H

#include <string>

using namespace std;

class animal {

public:
    animal(string n, int v);  // creates an animal with name n and body volume v.
    // animals are allocated a unique ID on creation

    // getter -> name
    virtual string get_name() = 0;
    // setter -> name
    void set_name(string t_name);

    int get_animal_id();

    void set_animal_id(int id);

    int get_volume();

    void set_volume(int v);

protected:

    string name ;              // the animal's name
    int animalID ;             // the animal's unique ID
    int volume ;               // the volume of the animal's body

};


#endif //OOP_TEACHING_2021_S2_ANIMAL_H
