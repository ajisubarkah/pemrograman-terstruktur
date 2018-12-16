#include <iostream>

using namespace std;

int main() {
  string fullname;

  cout << "Your fullname : ";
  getline(cin, fullname);

  cout << "Hello I'm " << fullname;
}
