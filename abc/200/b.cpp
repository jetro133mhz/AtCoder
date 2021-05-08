#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string n;
  int k;
  cin >> n >> k;
  for (int i = 0; i < k; ++i) {
    long value = stol(n);
    if (value % 200 == 0) {
      value /= 200;
      n = to_string(value);
    } else {
      n += "200";
    }
  }
  cout << n << endl;
}