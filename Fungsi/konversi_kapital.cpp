#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <iterator>

using namespace std;

string hasil = "";

string convertKapital(string str, int index) {
    int n = str.length();
    char arr[n+1];
    strcpy(arr, str.c_str());
    if (index <= n) {
        if(arr[index] >= 'A' && arr[index] <= 'Z') {
            hasil += (char) arr[index] + 32;
        } else {
            hasil += (char) arr[index];
        }
        return convertKapital(str, index + 1);
    } else {
        return hasil;
    }
}

main() {

    string str = "Hello World I'm Programmer!";

    cout << convertKapital(str, 0);

}
