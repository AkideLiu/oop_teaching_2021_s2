// Author : Akide Liu 
// Date : 25/10/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include "animal.h"

animal::animal(string n, int v) {
    this->name = n;
    this->volume = v;
}

void animal::set_name(string t_name) {
    this->name = t_name;
}

int animal::get_animal_id() {
    return this->animalID;
}

void animal::set_animal_id(int id) {
    this->animalID = id;
}

int animal::get_volume() {
    return this->volume;
}

void animal::set_volume(int v) {
    this->volume = v;
}

