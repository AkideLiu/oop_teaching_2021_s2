// Author : Akide Liu 
// Date : 6/9/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#ifndef OOP_TEACHING_2021_S2_MUSICIAN_H
#define OOP_TEACHING_2021_S2_MUSICIAN_H

#include <string>
#include <ostream>

class Musician {

public:
    Musician();                  // a default constructor
// a constructor that takes the instrument played and the years of experience
    Musician(std::string instrument, int experience);
    std::string get_instrument();    // returns the instrument played
    int get_experience();       // returns the number of years experience
    ~Musician();                //A default destructor
    // You may add any other methods and any state variables you want, but the methods listed above must be available and public. The default constructor should set the instrument variable to "null" and years of experience to 0.

    friend std::ostream &operator<<(std::ostream &os, const Musician &musician);

private:
    std::string instrument;
    int experience;

};


#endif //OOP_TEACHING_2021_S2_MUSICIAN_H
