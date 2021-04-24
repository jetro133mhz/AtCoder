#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, q;
  string s;
  cin >> n >> s >> q;

  for (int i = 0; i < q; ++i) {
    int t, a, b;
    cin >> t >> a >> b;
    if (t == 1) {
      swap(s.at(a - 1), s.at(b - 1));
    } else {
//      vector<char> firstHalf(n);
//      vector<char> latterHalf(n);
//      for (int j = 0; j < n; ++j) {
//        firstHalf.at(j) = s.at(j);
//        latterHalf.at(j) = s.at(n - j);
//      }
//      for (int j = 0; j < n; ++j) {
//        s.at(j) = latterHalf.at(j);
//      }
//      for (int j = n; j < 0; --j) {
//        s.at(j) = firstHalf.at(n - j);
//      }

      //以下ではTLE
      s = s.substr(2 * n - n, n) + s.substr(0, n);
    }
  }
  cout << s << endl;
}