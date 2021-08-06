// Author : Akide Liu 
// Date : 5/8/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>

using namespace std;

int diagonal(int array[4][4]){
    int sum = 0;

    for (int i = 0; i < 4; ++i) {

        sum += array[i][i];

    }

    return sum;
}