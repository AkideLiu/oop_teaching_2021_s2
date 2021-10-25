// Author : Akide Liu 
// Date : 25/10/21
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

// helper :

#include <gtest/gtest.h>
#include <fmt/core.h>
#include <memory>
#include <dbg.h>
#include <cmath>
#include <algorithm>
#include <climits>
#include <exception>
#include <random>
#include <ostream>


using namespace std;

#include <zoo.h>
#include <sort_by_animalID.h>

TEST(week12_test, zoo) {

    zoo *z = new zoo("Ak's zoo", 3, 5);

    auto a = z->getAnimals();

    sort_by_animalID::STLsort(a, 3 + 5);

    for (int i = 0; i < 3 + 5; ++i) {
        fmt::print("name : {}, volume : {}, id : {}\n", a[i]->get_name(), a[i]->get_volume(), a[i]->get_animal_id());
    }



}
