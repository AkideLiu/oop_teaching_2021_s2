// Author : Akide Liu 
// Date : 6/9/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#ifndef OOP_TEACHING_2021_S2_ORCHESTRA_H
#define OOP_TEACHING_2021_S2_ORCHESTRA_H

#include "Musician.h"
#include <string>
#include <vector>

class Orchestra {

public:
    Orchestra();           // default constructor
    Orchestra(int size);   // constructor for an orchestra of given size

// returns the number of musicians who have joined the orchestra
    int get_current_number_of_members();

// returns true if any musician in the orchestra plays the specified instrument
// otherwise returns false
    bool has_instrument(std::string instrument);

    Musician *get_members();        // returns the array of members of the orchestra

// returns true and adds new musician to the orchestra if the orchestra is not full
// otherwise returns false
    bool add_musician(Musician new_musician);

    ~Orchestra();

private:
    int size;
    std::vector<Musician> Musician_array;

};


#endif //OOP_TEACHING_2021_S2_ORCHESTRA_H
