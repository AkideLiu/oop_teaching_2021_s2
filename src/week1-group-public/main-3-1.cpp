// Author : Akide Liu 
// Date : 30/7/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>
using namespace std;

extern bool fanarray(int array[], int n);

int main() {

    int array[5] = {1, 2, 3, 2, 1};
    int array1[4] = {2, 4, 4, 2};
    int array2[5] = {1, 2, 1, 2, 1};

    cout << fanarray(array, 5) << endl;
    cout << fanarray(array1, 4) << endl;
    cout << fanarray(array2, 5) << endl;

    return 0;
}