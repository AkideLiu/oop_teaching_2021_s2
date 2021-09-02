// Author : Akide Liu 
// Date : 2/9/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include "meerkat.h"

meerkat::meerkat() = default;

void meerkat::setName(string meerName) {
    this->meerName = meerName;
}

string meerkat::getName() {
    return this->meerName;
}

void meerkat::setAge(int meerAge) {
    this->meerAge = meerAge;
}

int meerkat::getAge() {
    return this->meerAge;
}
