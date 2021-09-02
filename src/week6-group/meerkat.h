// Author : Akide Liu 
// Date : 2/9/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#ifndef OOP_TEACHING_2021_S2_MEERKAT_H
#define OOP_TEACHING_2021_S2_MEERKAT_H

#include <string>
using namespace std;

class meerkat {

public:
    meerkat() ;                      // no name or age is required to create a meerkat
    void setName(string meerName);   // change the meerkat's name
    string getName();
    void setAge(int meerAge);        // change the meerkat's age
    int getAge();

private:
    string meerName;
    int meerAge;


};


#endif //OOP_TEACHING_2021_S2_MEERKAT_H
