// Author : Akide Liu 
// Date : 24/8/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <vector>
#include <algorithm>

using namespace std;

// void swap(int *x,int *y){
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }
//
// void bubbleSort(int arr[], int n){
//
//     for (int i = 0; i < n - 1; ++i) {
//         for (int j = 0; j < n - i - 1; ++j) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(&arr[j], &arr[j + 1]);
//             }
//         }
//     }
//
// }

int secondSmallestSum(int *numbers,int length){

    vector<int> sumArray;


    for (int i = 0; i < length; ++i) {
        int sum = 0;
        for (int j = 0; j < length - i; ++j) {

            sum += numbers[i + j];
            sumArray.push_back(sum);

        }
    }

    sort(sumArray.begin(), sumArray.end());


    // second min
    return sumArray[1];

}