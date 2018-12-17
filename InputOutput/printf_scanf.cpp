#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
  string nickname;
  int age;

  printf("Your nickname : ");
  int valInput = scanf("%s", nickname);

  printf("Your age : ");
  scanf("%d", &age);

  printf("Hello I'm %s\n", nickname);
  int val = printf("My age is %d years old\n\n", age);

  printf("Total \"My age is %d years old\" is %d character ", age, val);
  printf("and value input nickname is %d ", valInput);
}
