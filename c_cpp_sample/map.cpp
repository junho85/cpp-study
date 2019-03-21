#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main() {

    map<int, int> map_nums{
            {1, 1},
            {2, 2},
            {3, 3},
            {4, 5},
            {5, 8},
            {6, 13},
    };

    map_nums[7] = 21;

    auto iter = map_nums.find(7);
    cout << iter->first << endl;
    cout << iter->second << endl;


    return 0;
}

