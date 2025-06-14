#include <bits/stdc++.h>

using namespace std;

int main() {
  int H, W, X, Y;
  cin >> H >> W >> X >> Y;

  vector<vector<char>> S(W, vector<char>(H));
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> S.at(j).at(i);
    }
  }

  //(X, Y)から見えるマスを計算
  //X軸+方向
  int countX_p = 0;
  for (int i = Y; i < W; i++) {
    if (S.at(Y).at(i) == '#') {
      break;
    } else {
      countX_p++;
    }
  }
  //X軸-方向
  int countX_n = 0;
  for (int i = Y; i >= 0; i--) {
    if (S.at(Y).at(i) == '#') {
      break;
    } else {
      countX_n++;
    }
  }

  //Y軸+方向
//  int countY_p = 0;
//  for (int i = Y; i < W; i++) {
//    if (S.at(Y).at(i) == '#') {
//      break;
//    } else {
//      countX_p++;
//    }
//  }

  //結果出力
  cout << countX_p << countX_n;

//  for (int i = 0; i < H; i++) {
//    for (int j = 0; j < W; j++) {
//      cout << S.at(j).at(i);
//    }
//    cout << endl;
//  }
}