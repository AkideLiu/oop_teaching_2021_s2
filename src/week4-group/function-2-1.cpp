// Author : Akide Liu 
// Date : 17/8/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>

using namespace std;

void print_sevens(int *nums,int length){
    for (int i = 0; i < length; ++i) {
        if (*nums % 7 == 0) {
            cout << *nums << endl;
        }
        nums++;
    }
}