#include <bits/stdc++.h>

using namespace std;


int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  vector<int> b(n);

  for (int i = 0; i < n; ++i) {
    cin >> a.at(i);
  }
  for (int i = 0; i < n; ++i) {
    cin >> b.at(i);
  }

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());


  if ((b.at(0) - a.at(n - 1)) < 0) {
    cout << 0 << endl;
  } else {
    cout << b.at(0) - a.at(n - 1) + 1 << endl;
  }
}