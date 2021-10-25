// Author : Akide Liu 
// Date : 25/10/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#ifndef OOP_TEACHING_2021_S2_SORT_BY_ANIMALID_H
#define OOP_TEACHING_2021_S2_SORT_BY_ANIMALID_H

#include "animal.h"
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

class sort_by_animalID {

public:

    static void sort(animal **animals, int n);	// sorts the array of n animals into ascending order using their animalIDs

    static void STLsort(animal **animals, int n);


private:

    static int getDigitAt(int input, int position);

    static int getDigitNum(int input);


};


#endif //OOP_TEACHING_2021_S2_SORT_BY_ANIMALID_H
