#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> vec(N);
  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
  }
  //奇数フラグ
  bool isOdd = false;
  //計算回数
  int result = 0;
  while (1) {
    for (int i = 0; i < N; i++) {
      //偶数の場合は2で割った数値で置き換える
      if ((vec.at(i) % 2) == 0) {
        vec.at(i) = vec.at(i) / 2;
      } else {
        //奇数の場合はフラグを立ててループを抜ける
        isOdd = true;
        break;
      }
    }
    //奇数フラグがtrueの場合は終了
    if (isOdd) {
      break;
    } else {
      //奇数フラグがfalseの場合は計算回数をインクリメントしてループ継続
      result++;
    }
  }

  cout << result << endl;
}