#include <bits/stdc++.h>

using namespace std;

int main() {
  int S;
  cin >> S;
  int h, m, s;
  h = S / 60 / 60;
  s = S % 60;
  m = (S - s - (h * 60 * 60)) / 60;
  cout << h << ":" << m << ":" << s << endl;
}