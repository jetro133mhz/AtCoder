#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  //二次元配列で文字列で処理したところ一部WAになったため二次元配列を使うのはやめた
  vector<string> name(n);
  vector<int> height(n);
  vector<int> tmp(n);

  for (int i = 0; i < n; i++) {
    cin >> name.at(i) >> height.at(i);
    tmp.at(i) = height.at(i);
  }

  //比較用の配列に高さのみを入れて高い順位ソートする
  sort(tmp.begin(), tmp.end());
  reverse(tmp.begin(), tmp.end());
  //2番目の高さを取得
  int value = tmp.at(1);

  //2番目の高さと一致する名前を出力して終了
  for (int i = 0; i < n; ++i) {
    if (height.at(i) == value) {
      cout << name.at(i) << endl;
      break;
    }
  }
}
