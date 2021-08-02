// Author : Akide Liu 
// Date : 30/7/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>
using namespace std;

extern int median(int array[], int n);

int main() {

    int array[5] = {3, 5, 1, 2, 4};
    int array1[4] = {2, 4, 4, 2};
    int array2[5] = {1, 2, 1, 2, 1};

    cout << median(array, 5) << endl;
    cout << median(array1, 4) << endl;
    cout << median(array2, 5) << endl;

    return 0;
}