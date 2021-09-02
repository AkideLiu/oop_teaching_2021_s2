// Author : Akide Liu 
// Date : 2/9/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#ifndef OOP_TEACHING_2021_S2_AIRCRAFT_H
#define OOP_TEACHING_2021_S2_AIRCRAFT_H

#include "person.h"
#include <iostream>

using namespace std;

class aircraft {

public:
    // a pilot and copilot must be provided when creating an aircraft
    aircraft(string callsign,person thePilot,person theCoPilot);
    void setPilot(person thePilot);      // change the pilot
    person getPilot();
    void setCoPilot(person theCoPilot);  // change the co-pilot
    person getCoPilot();
    void printDetails();                 // print the callsign, a new line, the pilot name,
    // a new line, the co-pilot name and a final newline.

private:
    person pilot;
    person coPilot;
    string callSign;
};


#endif //OOP_TEACHING_2021_S2_AIRCRAFT_H
