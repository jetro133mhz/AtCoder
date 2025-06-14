#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); ++i) {
    s.at(i) -= 13;
  }
  cout << s << endl;
}