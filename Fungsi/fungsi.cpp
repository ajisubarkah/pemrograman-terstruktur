#include <iostream>

using namespace std;

int max(int a, int b) {
    int result;

    if(a < b)
        result = b;
    else
        result = a;

    return result;
}

void printMax(int result) {
    cout << "Maximum number is : " << result << endl;
}

double divide(int a, int b);

main() {
    int a = 5;
    int b = 9;
    int resultMax;
    double resultDivide;

    resultMax = max(a, b);

    cout << "A : " << a << endl;
    cout << "B : " << b << endl;
    printMax(resultMax);

    resultDivide = divide(a,b);

    cout << "Result of a divide b is : " << resultDivide << endl;
}

double divide(int a, int b) {
    return (double) a / b;
}
