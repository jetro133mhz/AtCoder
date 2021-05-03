#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  //abcを文字列に連結してソートした結果 557 となればYES
  string s = to_string(a) + to_string(b) + to_string(c);
  sort(s.begin(), s.end());
  if (s == "557") {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}