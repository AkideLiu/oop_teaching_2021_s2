// Author : Akide Liu 
// Date : 30/7/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>
using namespace std;

extern double weightedaverage(int array[], int n);

int main() {

    int array[6] = {1,2,1,4,1,3};

    cout << weightedaverage(array, 6) << endl;

    return 0;
}