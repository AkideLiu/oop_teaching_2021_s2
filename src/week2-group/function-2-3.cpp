// Author : Akide Liu 
// Date : 5/8/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>

using namespace std;

int GLOBAL_FlAG = 0;

bool is_a_palindrome(int integers[], int length){
    GLOBAL_FlAG = 0;

    if (length < 1) {
        GLOBAL_FlAG = -1;
    }

    for (int i = 0; i < length; ++i) {
        if (integers[i] != integers[length - i - 1]) {
            GLOBAL_FlAG = -2;
        }
    }

    // if (GLOBAL_FlAG >= 0) {
    //     return true;
    // } else {
    //     return false;
    // }

    return GLOBAL_FlAG >= 0;

}

int sum_elements(int integers[], int length){
    int sum = 0;
    for (int i = 0; i < length; ++i) {
        sum += integers[i];
    }

    return sum;
}

int sum_if_a_palindrome(int integers[], int length){
    if (!is_a_palindrome(integers, length)) {
        return GLOBAL_FlAG;
    }
    return sum_elements(integers, length);
}


