// Author : Akide Liu 
// Date : 17/8/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

int size_of_variable_star_t(){
    int a, *p;
    p = &a;
    int *t = new int;

    return sizeof(t);
}

int size_of_variable_star_arr(){
    int *arr = new int[3];
    return sizeof(*arr);
}

int size_of_array_arr(){
    int size = 0;

    int *arr = new int[3];
    for (int i = 0; i < 3; ++i) {
        size += sizeof(*(arr + i));
    }

    return size;

}

int* init_array_given_size(int n) {
    return new int[n];
}
