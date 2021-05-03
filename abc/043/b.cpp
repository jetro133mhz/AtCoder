#include <bits/stdc++.h>

using namespace std;

int main() {
  string s, result;
  cin >> s;

  for (char i : s) {
    if (i == 'B') {
      if (!result.empty()) {
        result.pop_back();
      }
    } else {
      result += i;
    }
  }

  cout << result << endl;
}