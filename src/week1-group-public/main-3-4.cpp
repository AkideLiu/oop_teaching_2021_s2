// Author : Akide Liu 
// Date : 30/7/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>
using namespace std;

extern void passorfail(char grade);

int main() {

    char array[7] = {'A','B','C','D','E','F','S'};

    for (int i = 0; i < 7; ++i) {
        passorfail(array[i]);
    }
    return 0;
}