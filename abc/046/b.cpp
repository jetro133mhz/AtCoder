#include <bits/stdc++.h>

using namespace std;

//何故かWAになる
int main() {
  string Sa, Sb, Sc;
  cin >> Sa >> Sb >> Sc;

  string tmp;
  char player = 'A';

  while (1) {
    if (player == 'A') {
      if (Sa.empty()) {
        cout << 'A';
        return 0;
      }
      tmp = Sa;
    } else if (player == 'B') {
      if (Sb.empty()) {
        cout << 'B';
        return 0;
      }
      tmp = Sb;
    } else {
      if (Sc.empty()) {
        cout << 'C';
        return 0;
      }
      tmp = Sc;
    }

    if (tmp.at(0) == 'a') {
      Sa.erase(0, 1);
      player = 'A';
    } else if (tmp.at(0) == 'b') {
      Sb.erase(0, 1);
      player = 'B';
    } else if (tmp.at(0) == 'c') {
      Sc.erase(0, 1);
      player = 'C';
    }
  }
}