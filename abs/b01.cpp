#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<char> vec(3);
  for (int i = 0; i < 3; i++) {
    cin >> vec.at(i);
  }

  int result = 0;
  for (int i = 0; i < 3; i++) {
    if (vec.at(i) == '1') {
      result++;
    }
  }

  cout << result;
}