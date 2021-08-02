// Author : Akide Liu 
// Date : 30/7/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//
#include <iostream>
using namespace std;

int minimum(int array[], int n){

    if (n < 1) {
        return 0;
    }

    int min = array[0];

    for (int i = 0; i < n; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
    }

    return min;

}

