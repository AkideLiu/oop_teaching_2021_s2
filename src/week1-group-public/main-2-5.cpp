// Author : Akide Liu 
// Date : 30/7/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>
using namespace std;

extern bool descending(int array[], int n);

int main() {

    int array[6] = {6,4,3,2,1,1};
    int array1[6] = {1,2,2,3,4,5};

    cout << descending(array, 6) << endl;
    cout << descending(array1, 6) << endl;
    
    return 0;
}