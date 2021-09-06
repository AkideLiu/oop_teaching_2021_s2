// Author : Akide Liu 
// Date : 6/9/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include "Musician.h"

Musician::Musician() {
    this->instrument = "null";
    this->experience = 0;
}

Musician::Musician(std::string instrument, int experience) {
    this->instrument = instrument;
    this->experience = experience;
}

std::string Musician::get_instrument() {
    return this->instrument;
}

int Musician::get_experience() {
    return this->experience;
}

std::ostream &operator<<(std::ostream &os, const Musician &musician) {
    os << "instrument: " << musician.instrument << " experience: " << musician.experience;
    return os;
}

Musician::~Musician() = default;
