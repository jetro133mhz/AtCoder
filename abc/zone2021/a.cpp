#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  int count = 0;
  cin >> s;
  for (int i = 0; i < 12; ++i) {
    if (s.substr(i, 4) == "ZONe") {
      count++;
    }
  }
  cout << count << endl;
}