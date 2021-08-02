// Author : Akide Liu 
// Date : 30/7/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//
#include <iostream>
using namespace std;

bool ascending(int array[], int n) {

    if (n < 1) {
        return false;
    }

    for (int i = 0; i < n-1; ++i) {
        if (array[i] <= array[i + 1]) {

        } else {
            return false;
        }

    }

    return true;

}

