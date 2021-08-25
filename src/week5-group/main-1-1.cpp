// Author : Akide Liu 
// Date : 24/8/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>
using namespace std;

extern int *readNumbers() ;

extern void printNumbers(int *numbers, int length);

extern bool equalsArray(int *numbers1,int *numbers2,int length) ;

int main(){

    int *array1 = readNumbers();

    int *array2 = readNumbers();

    cout << (equalsArray(array1, array2, 10) ? "True" : "False") << endl;


    // bool flag = equalsArray(array1, array2, 10);
    //
    // if (flag) {
    //     cout << "True" << endl;
    // } else {
    //     cout << "False" << endl;
    // }

    // printNumbers(array1, 10);

}