#include<iostream>
#include <stdio.h>

using namespace std;

int main(){
  int num;
  int min = 1000000, max = -1000000;
  long long sum = 0;

  cin >> num;

  for (int i = 0; i < num; i++) {
    int tmp = 0;
    cin >> tmp;
    sum += tmp;
    if (tmp < min) {
      min = tmp;
    }
    if (tmp > max) {
      max = tmp;
    }
  }

  cout << min << " " << max << " " << sum << endl;

  return 0;
}
