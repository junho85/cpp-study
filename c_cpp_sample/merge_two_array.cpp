#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <iostream>
#include <vector>

using namespace std;

int *array_concat(const void *a, int an, const void *b, int bn) {
    int *p = (int *) malloc(sizeof(int) * (an + bn));
    memcpy(p, a, an * sizeof(int));
    memcpy(p + an, b, bn * sizeof(int));
    return p;
}

int main(void) {
    const int a[] = {1, 2, 3, 4, 5};
    const int b[] = {6, 7, 8, 9, 0};

    int *c = array_concat(a, 5, b, 5);

    for (int i = 0; i < 10; i++) {
        printf("%d\n", c[i]);
    }

    free(c);

    // cpp
    cout << endl;

    int aa[] = {1, 2, 3, 4, 5};
    int bb[] = {6, 7, 8, 9, 0};
    int cc[10];

    int* i = copy(aa, aa + 5, cc);
    copy(bb, bb + 5, i);

    for (auto value : cc) {
        printf("%d\n", value);
    }

    // cpp
    cout << endl;

    vector<int> va{1, 2, 3, 4, 5};
    vector<int> vb{6, 7, 8, 9, 0};
    vector<int> vc;

    vc.insert(vc.end(), va.begin(), va.end());
    vc.insert(vc.end(), vb.begin(), vb.end());

    for (auto iter : vc) {
        cout << iter << endl;
    }

    return 0;
}