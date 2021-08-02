// Author : Akide Liu 
// Date : 30/7/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>
using namespace std;

extern int count_even(int number);

int main() {

    int count_n = count_even(15);
    cout << count_n << endl;

    return 0;
}