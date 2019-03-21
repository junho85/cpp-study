#include <stdio.h>
#include <string.h>

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    // c
    int a[] = {1,2,3,4,5};

    // cpp
    vector<int> nums {1,2,3,4,5};
    auto low = lower_bound(nums.begin(), nums.end(), 3);
    cout << low - nums.begin() << endl;


    return 0;
}
