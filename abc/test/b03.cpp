#include <bits/stdc++.h>

using namespace std;

int main() {
  int H, W;
  cin >> H >> W;

  vector<vector<char>> A(W, vector<char>(H));
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> A.at(j).at(i);
    }
  }

  //W方向のデータチェック
  vector<bool> hasBlack_row(H, false);
  for (int i = 0; i < H; i++) {
    int count = 0;
    for (int j = 0; j < W; j++) {
      if (A.at(j).at(i) == '#') {
        continue;
      } else {
        count++;
      }
    }
    //すべて空の場合はi行目は空としてマークする
    if (count == W) {
      hasBlack_row.at(i) = true;
    }
  }

  //H方向のデータチェック
  vector<bool> hasBlack_col(W, false);
  for (int i = 0; i < W; i++) {
    int count = 0;
    for (int j = 0; j < H; j++) {
      if (A.at(i).at(j) == '#') {
        continue;
      } else {
        count++;
      }
    }
    //すべて空の列はi列目は空としてマークする
    if (count == H) {
      hasBlack_col.at(i) = true;
    }
  }

  //結果出力
  for (int i = 0; i < H; i++) {
    if (!hasBlack_row.at(i)) {
      for (int j = 0; j < W; j++) {
        if (hasBlack_col.at(j)) {
          continue;
        }
        cout << A.at(j).at(i);
      }
      cout << endl;
    }
  }
}