// Author : Akide Liu 
// Date : 5/8/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>

using namespace std;

int min_integer(int integers[], int length){
    if (length < 1) {
        return -1;
    }
    int min = integers[0];

    for (int i = 0; i < length; ++i) {
        if (integers[i] < min) {
            min = integers[i];
        }
    }

    return min;
}

int max_integer(int integers[], int length){
    if (length < 1) {
        return -1;
    }

    int max = integers[0];

    for (int i = 0; i < length; ++i) {
        if (integers[i] > max) {
            max = integers[i];

        }
    }

    return max;
}

int sum_min_and_max(int integers[], int length){
    if (length < 1) {
        return -1;
    }

    return min_integer(integers, length) + max_integer(integers, length);
}