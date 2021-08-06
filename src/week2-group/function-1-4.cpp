// Author : Akide Liu
// Date : 5/8/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>

using namespace std;

void print_scaled_matrix(int array[3][3],int scale){

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            array[i][j] = array[i][j] * scale;

            cout << array[i][j] << " ";
        }
        cout << endl;
    }


}

