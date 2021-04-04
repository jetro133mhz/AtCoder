#include <bits/stdc++.h>

using namespace std;

int main() {
  string S;
  cin >> S;
  char lastChar = S.at(S.size() - 1);

  if (lastChar == 'T') {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}