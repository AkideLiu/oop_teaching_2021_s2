// Author : Akide Liu 
// Date : 2/9/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include "cart.h"

cart::cart() = default;

bool cart::addMeerkat(meerkat cat) {
    if (length >= 4) {
        cerr << "Error :" << endl;
        return false;
    }
    meerkat_array[length] = &cat;
    length++;
    return true;
}

void cart::emptyCart() {
    for (int i = 0; i < length; ++i) {
        meerkat_array[i] = nullptr;
    }
    length = 0;
}


// print the name, a space, the age, then a new line
void cart::printMeerkats() {
    for (auto & cat : meerkat_array) {
        cout << cat->getName() << " " << cat->getAge() << endl;
    }
}

cart::~cart() {
    for (auto &cat: meerkat_array) {
        delete cat;
    }
}
