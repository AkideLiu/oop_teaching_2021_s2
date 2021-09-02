// Author : Akide Liu 
// Date : 2/9/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#ifndef OOP_TEACHING_2021_S2_CART_H
#define OOP_TEACHING_2021_S2_CART_H

#include "meerkat.h"
#include <vector>
#include <iostream>

using namespace std;

class cart {

public:
    cart();                         // create an empty cart object
    bool addMeerkat(meerkat cat);   // adds a meerkat to the cart, returns false if full
    void emptyCart();               // remove all meerkats from the cart
    void printMeerkats();           // print the name, a space, the age, then a new line
    // for each meerkat in the order they were added
    virtual ~cart();
    //

private:
    // vector<meerkat> meerkat_array;
    meerkat * meerkat_array[4];
    int length = 0;

};


#endif //OOP_TEACHING_2021_S2_CART_H
