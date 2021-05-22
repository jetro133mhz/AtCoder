#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;

  for (int i = 0; i < s.size(); i++) {
    if (s.at(i) == '6') {
      s.at(i) = '9';
    } else if (s.at(i) == '9') {
      s.at(i) = '6';
    }
  }

  reverse(s.begin(), s.end());

  cout << s;
}
