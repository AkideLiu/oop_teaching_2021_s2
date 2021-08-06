// Author : Akide Liu 
// Date : 5/8/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>
#include <string>
#include <bitset>

using namespace std;

void print_as_binary(std::string decimal_number){

    if (decimal_number.length() < 1 || decimal_number.length() > 9){
        return;
    }

    int number = stoi(decimal_number);

    string binary = bitset<10>(number).to_string();

    cout << stoi(binary) << endl;

};
