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
      //以下ではTLE
      // t=2 の場合の対処が必要
      s = s.substr(2 * n - n, n) + s.substr(0, n);
    }
  }
  cout << s << endl;
}