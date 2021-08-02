// Author : Akide Liu 
// Date : 30/7/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>
using namespace std;

extern int sumtwo(int array[], int secondarray[], int n);

int main() {
    int array[15] = {3, 4, 5, 3, 4, 6, 7, 8, 2, 1, 3, 4, 5, 6, 3};
    int secondarray[15] = {3, 4, 5, 3, 4, 6, 7, 8, 2, 1, 3, 4, 5, 6, 3};


    int count_n = sumtwo(array, secondarray, 15);
    cout << count_n << endl;

    return 0;
}