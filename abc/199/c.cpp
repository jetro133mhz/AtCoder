#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, q;
  string s;
  cin >> n >> s >> q;

  bool isReverse = false;
  for (int i = 0; i < q; ++i) {
    int t, a, b;
    cin >> t >> a >> b;
    if (t == 1) {
      if (isReverse) {
        swap(s.at(a - 1 + n), s.at(b - 1 - n));
      } else {
        swap(s.at(a - 1), s.at(b - 1));
      }
    } else {
      isReverse = !isReverse;
      // 普通に処理するとTLEになる
      // t=2 の場合の反転操作は行わず、反転状態のみを管理する。
      // データが反転している場合は t=1 の処理を調整して対応する。
      // s = s.substr(2 * n - n, n) + s.substr(0, n);
    }
  }
  if (isReverse) {
    cout << s.substr(2 * n - n, n) + s.substr(0, n) << endl;
  } else {
    cout << s << endl;
  }
}