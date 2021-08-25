// Author : Akide Liu 
// Date : 24/8/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void hexDigits(int *numbers,int length){

    vector<string> hexValues = {"A", "B", "C", "D", "E", "F"};

    for (int i = 0; i < length; ++i) {
        if (numbers[i] < 10) {
            cout << i << " " << numbers[i] << " " << numbers[i] << endl;
        }else {

            //  cout << i << " " << numbers[i] << " " << hexValues[numbers[i] - 10] << endl;
            switch (numbers[i]) {
                case 10:
                    cout << i  << " " << numbers[i] << " " << "A" << endl;
                    break;
                case 11:
                    cout << i  << " " << numbers[i] << " " << "B" << endl;
                    break;
                case 12:
                    cout << i  << " " << numbers[i] << " " << "C" << endl;
                    break;
                case 13:
                    cout << i  << " " << numbers[i] << " " << "D" << endl;
                    break;
                case 14:
                    cout << i  << " " << numbers[i] << " " << "E" << endl;
                    break;
                case 15:
                    cout << i  << " " << numbers[i] << " " << "F" << endl;
                    break;

            }
        }
    }
}

