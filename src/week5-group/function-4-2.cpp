// Author : Akide Liu 
// Date : 25/8/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>

using namespace std;

int *sparse_count(int **vals,int num_rows,int num_cols){

    int *result = new int[2];
    result[0] = 0;
    result[1] = 0;

    for (int i = 0; i < num_rows; ++i) {
        for (int j = 0; j < num_cols; ++j) {
            if (vals[i][j] == 0) {
                result[0]++;
            } else if (vals[i][j] > 0) {
                result[1]++;
            } else {
                cerr << "the values is not greater than or equal to zero" << vals[i][j] << endl;
            }
        }
    }

    return result;

}