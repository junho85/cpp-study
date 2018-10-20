#include <iostream>
#include <string>
#include <set>
#include <iterator>

using namespace std;

int main() {
    set<string> myset;
    myset.insert("hello");

    myset.insert("world");
    myset.insert("world"); // duplicate value is ignored

    myset.insert("!");

    myset.insert("apple");

//    myset.insert(1); // can't insert not string
//    myset.insert(nullptr); // can't insert null


    // all elements
    /*
!
apple
hello
world
     */
    cout << "== begin ==" << endl;
    for (set<string>::iterator it = myset.begin(); it != myset.end(); it++) {
        cout << *it << endl;
    }
    cout << "== end ==" << endl;

    // simple way
    cout << "== begin ==" << endl;
    for (const auto &it : myset) {
        cout << it << endl;
    }
    cout << "== end ==" << endl;

    // get specific element
    set<string>::iterator it = myset.begin();
    advance(it, 0);
    cout << *it << endl; // !
    advance(it, 1);
    cout << *it << endl; // apple

    // c++11
    cout << *std::next(myset.begin(), 0) << endl; // !
    cout << *std::next(myset.begin(), 1) << endl; // apple

    return 0;
}