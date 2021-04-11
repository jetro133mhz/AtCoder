#include <bits/stdc++.h>

using namespace std;


int main() {
  string N1, N2;
  cin >> N1;

  bool result = false;
  //入力の値の範囲から10までで問題なし
  for (int i = 0; i < 10; ++i) {
    N2 = N1;
    reverse(N2.begin(), N2.end());
    //元の文字列と、リバースにした文字列を比較して一致すればフラグを立ててループを抜ける
    if (N1 == N2) {
      cout << "Yes" << endl;
      result = true;
      break;
    } else {
      //一致しない場合は、N1の先頭に0を追加してループ継続
      N1.insert(0, "0");
    }
  }
  if (!result) {
    cout << "No" << endl;
  }
}