// Author : Akide Liu 
// Date : 25/10/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#ifndef OOP_TEACHING_2021_S2_VEGIE_H
#define OOP_TEACHING_2021_S2_VEGIE_H


#include "animal.h"

class vegie : public animal {

public:

    vegie(string n, int v);      // create a vegie with name n and body volume v

    const string &getFavouriteFood() const;

    void setFavouriteFood(const string &favouriteFood);

    string get_name() override;

private:

    static int nextID;

    string favourite_food = "grass" ;     // the vegie's favourite food, initialise to "grass"

};


#endif //OOP_TEACHING_2021_S2_VEGIE_H
