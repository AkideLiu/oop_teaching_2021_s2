// Author : Akide Liu 
// Date : 10/8/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

int FLAG = 0;

int sum_elements(int integers[], int length);

bool is_a_palindrome(int integers[], int length);

int sum_if_a_palindrome(int integers[], int length);

bool is_a_palindrome(int integers[], int length){
    FLAG = 0;
    if (length < 1) {
        FLAG = -1;
        return false;
    }

    for (int i = 0; i < length; ++i) {
        if (integers[i] != integers[length - i - 1]) {
            FLAG = -2;
            return false;
        }
    }

    return true;
}

int sum_elements(int integers[], int length){
    if (length < 1) {
        return -1;
    }

    int sum = 0;
    for (int i = 0; i < length; ++i) {
        sum += integers[i];
    }

    return sum;
}

int sum_if_a_palindrome(int integers[], int length){
    if (!is_a_palindrome(integers,length)) {
        return FLAG;
    }
    return sum_elements(integers, length);

}
