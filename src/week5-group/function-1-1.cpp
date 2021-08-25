// Author : Akide Liu 
// Date : 24/8/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>

using namespace std;

int *readNumbers(){

    int *array = new int[10];

    for (int i = 0; i < 10; ++i) {
        cin >> *(array + i);
    }

    return array;

}
void printNumbers(int *numbers,int length){

    // 0 5
    // 1 2
    // 2 3
    // 3 4
    // 4 35
    // 5 6
    // 6 7
    // 7 8
    // 8 -9
    // 9 10
    for (int i = 0; i < length; ++i) {
        cout << i << " " << *(numbers + i) << endl;
    }
}
