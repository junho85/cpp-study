#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> nums({1,3,2,5,4});

    sort(nums.begin(), nums.end());

    for (auto it = nums.begin(); it != nums.end(); ++it) {
        cout << *it << endl;
    }
    return 0;
}
