// Author : Akide Liu 
// Date : 25/10/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#ifndef OOP_TEACHING_2021_S2_HUNTER_H
#define OOP_TEACHING_2021_S2_HUNTER_H

#include "animal.h"

using namespace std;

class hunter : public animal {

public:

    hunter(string n, int v);  // create a hunter with name n and body volume v

    int get_kills();

    void set_kills(int k);

    string get_name() override;

private:

    int kills = 0;               // how many kills have been recorded, initialised to 0

    static int nextID ;

};


#endif //OOP_TEACHING_2021_S2_HUNTER_H
