#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> vec_a(n);
  vector<int> vec_b(n);
  vector<int> vec_c(n);

  for (int i = 0; i < n; ++i) {
    cin >> vec_a.at(i);
  }

  for (int i = 0; i < n; ++i) {
    cin >> vec_b.at(i);
  }

  for (int i = 0; i < n; ++i) {
    cin >> vec_c.at(i);
  }

  int result = 0;

  //TLEになるのでやり直し
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (vec_a.at(i) == vec_b.at(vec_c.at(j) - 1)) {
        result++;
      }
    }
  }

  cout << result;
}