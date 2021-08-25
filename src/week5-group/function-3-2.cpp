// Author : Akide Liu 
// Date : 24/8/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

int *reverseArray(int *numbers1,int length){

    int *reverseArray = new int[length];

    for (int i = 0; i < length; ++i) {
        reverseArray[length - 1 - i] = numbers1[i];
    }

    return reverseArray;

}
