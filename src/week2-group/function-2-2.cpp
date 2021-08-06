// Author : Akide Liu 
// Date : 5/8/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>
#include <bitset>

using namespace std;

int binary_to_number(int binary_digits[], int number_of_digits){

    if (number_of_digits < 1 || number_of_digits > 30){
        return -1;
    }

    for (int i = 0; i < number_of_digits; ++i) {
        if (binary_digits[i] != 0 && binary_digits[i] != 1) {
            return -1;
        }
    }

    int number = 0;
    for (int i = 0; i < number_of_digits; ++i) {
        number *= 10;
        number += binary_digits[i];
    }

    unsigned long  result = bitset<30>(to_string(number)).to_ulong();

    return (int)result;

}