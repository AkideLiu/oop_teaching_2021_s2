// Author : Akide Liu 
// Date : 30/7/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>


extern int sum_array(int array[], int n);
using namespace std;

int main(){
    int array[3] = {3, 4, 5};
    int sum = sum_array(array, 3);
    cout << sum << endl;

    return 0;
}