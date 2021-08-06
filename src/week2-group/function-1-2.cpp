// Author : Akide Liu 
// Date : 5/8/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>

using namespace std;

int identity(int array[10][10]) {

    for (int i = 0; i < 10; ++i) {
        if (array[i][i] != 1) {
            return 0;
        }

        for (int j = 0; j < 10; ++j) {
            if (array[i][j] != 0 && i != j) {
                return 0;
            }
        }

    }

    return 1;

}

