// Author : Akide Liu 
// Date : 17/8/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//


void cpyia(int old_array[], int new_array[], int length){
    int *old_ptr = old_array;
    int *new_ptr = new_array;

    for (int i = 0; i < length; ++i) {
        *(new_ptr++) = *(old_ptr++);
    }

}

