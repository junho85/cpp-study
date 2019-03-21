#include <stdio.h>
#include <string.h>

#include <iostream>
#include <string>

using namespace std;

int main() {
    char str[80];
    strcpy(str, "hello ");
    strcat(str, "world! ");
    strcat(str, "nice to ");
    strcat(str, "meet you.");

    printf("%s\n", str);

    string str2 = "hello ";
    str2 += "world! ";
    str2 += "nice to ";
    str2 += "meet you.";

    cout << str2 << endl;

    return 0;
}