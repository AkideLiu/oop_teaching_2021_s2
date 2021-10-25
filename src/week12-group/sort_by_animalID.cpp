// Author : Akide Liu 
// Date : 25/10/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include "sort_by_animalID.h"

void sort_by_animalID::sort(animal **animals, int n) {

    // deep copy the array
    animal **copy = new animal *[n];
    for (int i = 0; i < n; ++i) { // O(n)
        copy[i] = animals[i];
    }


    // find the max id of array of animals
    int max = -1;
    for (int i = 0; i < n; ++i) { // O(n)
        if (animals[i]->get_animal_id() > max) {
            max = animals[i]->get_animal_id();
        }
    }

    int currentIndex;
    for (int i = 0; i < getDigitNum(max); ++i) { // O(k)
        currentIndex = 0;
        for (int j = 0; j <= 9; ++j) { // O(1)
            for (int k = 0; k < n; ++k) { // O(n)
                if (getDigitAt(copy[k]->get_animal_id(), i) == j) {
                    animals[currentIndex] = copy[k];
                    currentIndex++;
                }
            }
        }

        for (int j = 0; j < n; ++j) { // O(n)
            copy[j] = animals[j];
        }

    }

    delete copy;

}

int sort_by_animalID::getDigitAt(int input, int position) {
    return input / (int) (std::pow(10,position)) % 10;
}

// k
int sort_by_animalID::getDigitNum(int input) {

    int temp = input;
    int output = 0;
    while (temp != 0) {
        temp /= 10;
        output++;
    }

    return output;
}

void sort_by_animalID::STLsort(animal **animals, int n) {

    // create a vector in order to hold the animals
    vector<animal *> temp;

    // deep copy the animals to temp
    for (int i = 0; i < n; ++i) {
        temp.push_back(animals[i]);
    }

    // STL sort
    std::sort(temp.begin(), temp.end(), [&](animal *a1, animal *a2) {

        // a1 < a2 increasing order
        return a1->get_animal_id() < a2->get_animal_id();
    });

    // deep copy the temp to the animals
    for (int i = 0; i < n; ++i) {
        animals[i] = temp[i];
    }

}
