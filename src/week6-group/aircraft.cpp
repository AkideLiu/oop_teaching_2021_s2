// Author : Akide Liu 
// Date : 2/9/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include "aircraft.h"

aircraft::aircraft(string callsign, person thePilot, person theCoPilot) {
    this->pilot = thePilot;
    this->coPilot = theCoPilot;
    this->callSign = callsign;
}

void aircraft::setPilot(person thePilot) {
    this->pilot = thePilot;
}

person aircraft::getPilot() {
    return this->pilot;
}

void aircraft::setCoPilot(person theCoPilot) {
    this->coPilot = theCoPilot;
}

person aircraft::getCoPilot() {
    return this->coPilot;
}

// // print the callsign, a new line, the pilot name,
void aircraft::printDetails() {
    cout << this->callSign << endl;
    cout << this->pilot.getName() << endl;
    cout << this->coPilot.getName() << endl;
}
