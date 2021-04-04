#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> vec(N);
  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
  }

  //降順にソート
  sort(vec.begin(), vec.end());
  reverse(vec.begin(), vec.end());

  //奇数の番 Alice 偶数の番 Bob となるので
  //配列先頭から順番に足し引き繰り返すと点差が求まる
  int dif = 0;
  for (int i = 0; i < N; i++) {
    if (i % 2 == 0) {
      dif -= vec.at(i);
    } else {
      dif += vec.at(i);
    }
  }

  //得点差が負の場合正の値に変換
  if (dif < 0) {
    dif *= -1;
  }

  cout << dif << endl;
}