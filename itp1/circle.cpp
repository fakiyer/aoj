#include<iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main(){
  double r;

  cin >> r;

  printf("%f %f\n", r * r * M_PI, 2 * r * M_PI);

  return 0;
}
