#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }

  // 結果格納用配列定義・初期化
  vector<vector<char>> R(N, vector<char>(N));
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      R.at(i).at(j) = '-';
    }
  }

  //結果格納
  for (int i = 0; i < M; ++i) {
    int a = A.at(i) - 1;
    int b = B.at(i) - 1;
    R.at(a).at(b) = 'o';
    R.at(b).at(a) = 'x';
  }

  //結果を出力
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      cout << R.at(i).at(j);
      if (j != (N - 1)) {
        cout << ' ';
      }
    }
    cout << endl;
  }
}