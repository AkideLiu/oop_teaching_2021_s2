// Author : Akide Liu 
// Date : 6/9/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include "Orchestra.h"

Orchestra::Orchestra() {
    this->size = 0;
}

Orchestra::Orchestra(int size) {
    this->size = size;
}

int Orchestra::get_current_number_of_members() {
    return (int)this->Musician_array.size();
}

bool Orchestra::has_instrument(std::string instrument) {

    for (auto &musician: Musician_array) {
        if (musician.get_instrument() != instrument) {
            return false;
        }
    }
    return true;
}

Musician *Orchestra::get_members() {
    return &this->Musician_array[0];
}

bool Orchestra::add_musician(Musician new_musician) {

    if (get_current_number_of_members() > this->size) {
        return false;
    }

    this->Musician_array.push_back(new_musician);
    return true;

}

Orchestra::~Orchestra() = default;
