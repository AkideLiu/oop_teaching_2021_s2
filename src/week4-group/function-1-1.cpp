// Author : Akide Liu 
// Date : 17/8/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <string>

using namespace std;

void copy_2d_strings(string first[][2], string second[][2], int n){
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 2; ++j) {
            second[i][j] = first[i][j];
        }
    }
}