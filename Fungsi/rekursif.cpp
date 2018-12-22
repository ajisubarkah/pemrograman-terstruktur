#include <iostream>
#include <string.h>

using namespace std;

long faktorial(int n) {
    if(n > 0) {
        return n * faktorial(n-1);
    } else {
        return 1;
    }
}

main() {
    cout << "Result 5! : " << faktorial(5) << endl;
}
