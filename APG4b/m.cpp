#include <bits/stdc++.h>

using namespace std;

int main() {
  string S;
  cin >> S;

  int n = S.size();
  char x;
  int result = 1;
  for (int i = 0; i < n; i++) {
    x = S.at(i);
    if (x == '+') {
      result++;
    } else if (x == '-') {
      result--;
    } else {
      continue;
    }
  }
  cout << result << endl;
}