#include<iostream>
#include <stdio.h>

using namespace std;

int main(){
  int a, b;

  cin >> a >> b;

  printf("%d %d %.5lf\n", a / b, a % b, 1.0 * a / b);

  return 0;
}
