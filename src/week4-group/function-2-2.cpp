// Author : Akide Liu 
// Date : 17/8/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

int maximum_sum(int *nums,int length){

    int n_count = 0;
    int max = 0;
    for (int i = 0; i < length; ++i) {
        int sum = 0;

        if (nums[i] < 0) {
            n_count++;
        }

        for (int j = 0; j < length - i; ++j) {
            sum += nums[i + j];
            if (sum > max) {
                max = sum;
            }
        }
    }

    return (n_count == length ) ? 0 : max;
}
