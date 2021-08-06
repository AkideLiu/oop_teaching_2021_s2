// Author : Akide Liu 
// Date : 5/8/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>

using namespace std;

void count_numbers(int array[4][4]){

    int *count_array = new int[10];

    // initialize the elements of count_array 
    for (int i = 0; i < 10; ++i) {
        count_array[i] = 0;
    }

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (array[i][j] <= 9 && array[i][j] >= 0) {
                count_array[array[i][j]]++;
            }
        }
    }

    // 0:12;1:4;2:0;3:0;4:0;5:0;6:0;7:0;8:0;9:0;
    for (int i = 0; i < 10; ++i) {
        cout << i << ":"
             << count_array[i] << ";";
    }
    cout << endl;

    delete[] count_array;
    
    
}