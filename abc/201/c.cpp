#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> vec(n);
  for (int i = 0; i < n; ++i) {
    cin >> vec.at(i);
  }

  int result = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (((vec.at(i) - vec.at(j)) % 200) == 0) {
        result++;
      }
    }
  }

  cout << result << endl;
}