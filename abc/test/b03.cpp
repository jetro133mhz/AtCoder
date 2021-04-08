#include <bits/stdc++.h>

using namespace std;

int main() {
  int H, W;
  cin >> H >> W;

  vector<vector<char>> A(W, vector<char>(H));
  for (int i = 0; i < H; ++i) {
    for (int j = 0; j < W; ++j) {
      cin >> A.at(j).at(i);
    }
  }

  //圧縮処理
  //W方向
  for (int i = 0; i < H; ++i) {
    int count = 0;
    for (int j = 0; j < W; ++j) {
      if (A.at(j).at(i) == '#') {
        continue;
      } else {
        count++;
      }
    }
    //すべて空の行は「-」で埋める
    if (count == W) {
      for (int j = 0; j < W; ++j) {
        A.at(j).at(i) = '-';
      }
    }
  }

  //H方向
  for (int i = 0; i < W; ++i) {
    int count = 0;
    for (int j = 0; j < H; ++j) {
      if (A.at(i).at(j) == '#') {
        continue;
      } else {
        count++;
      }
    }
    //すべて空の列は「-」で埋める
    if (count == H) {
      for (int j = 0; j < H; ++j) {
        A.at(i).at(j) = '-';
      }
    }
  }


  //出力おかしい
  //結果出力
  for (int i = 0; i < H; ++i) {
    for (int j = 0; j < W; ++j) {
      if (A.at(j).at(i) != '-') {
        if (j == (W - 1)) {
          cout << A.at(j).at(i) << endl;
        } else {
          cout << A.at(j).at(i);
        }
      }
    }
  }
}