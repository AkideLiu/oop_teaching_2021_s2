// Author : Akide Liu
// Date : 30/7/21
// License and copyright notice: GNU General Public License v3.0
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description :

//

#include <iostream>
using namespace std;

extern double average(int pInt[], int i);



int main(){
    int array[3] = {3, 4, 5};
    double ave = average(array, 3);
    cout << ave << endl;

    return 0;
}