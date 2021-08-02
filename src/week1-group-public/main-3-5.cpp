// Author : Akide Liu 
// Date : 30/7/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>
using namespace std;

extern double sumeven(double array[], int n);

int main() {

    double array[5] = {3.1, 5.3, 1.4, 2.5, 4.1};

    cout << sumeven(array, 5) << endl;
    return 0;
}