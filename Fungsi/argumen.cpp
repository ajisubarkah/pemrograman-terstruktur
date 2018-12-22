#include <iostream>

using namespace std;

void callByValue(int a, int b) {
    a *= 2;
    b *= 2;
    cout << "A : " << a << " B : " << b << endl;
}

void callByPointer(int *a, int *b) {
    cout << "A : " << a << endl;
    cout << "B : " << b << endl;
}

void callByReference(int& a, int& b) {
    a *= 2;
    b *= 2;
    cout << "A : " << a << " B : " << b << endl;
}

main() {
    int a = 5;
    int b = 9;

    cout << "Call by Value" << endl;
    callByValue(a,b);
    cout << "variable A: " << a << endl;
    cout << "variable B : " << b << endl;

    cout << "Call by Reference" << endl;
    callByReference(a,b);
    cout << "variable A : " << a << endl;
    cout << "variable B : " << b << endl;

    cout << "Call by Pointer" << endl;
    callByPointer(&a, &b);
}
