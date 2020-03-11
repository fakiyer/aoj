#include<iostream>

using namespace std;

int main(){
  int n;
  bool cards[4][13];
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 13; ++j) {
      cards[i][j] = false;
    }
  }

  cin >> n;

  char a;
  int b;
  for (int i = 0; i < n; i++){
    cin >> a >> b;
    if (a == 'S') {
      cards[0][b - 1] = true;
    } else if (a == 'H') {
      cards[1][b - 1] = true;
    } else if (a == 'C') {
      cards[2][b - 1] = true;
    } else if (a == 'D') {
      cards[3][b - 1] = true;
    }
  }

  char mark;
  for (int i = 0; i < 4; i++) {
    if (i == 0) {
      mark = 'S';
    } else if (i == 1) {
      mark = 'H';
    } else if (i == 2) {
      mark = 'C';
    } else if (i == 3) {
      mark = 'D';
    }

    for (int j = 0; j < 13; j++) {
      if (cards[i][j] == false) {
        cout << mark << " " << j + 1 << endl;
      }
    }
  }

  return 0;
}
