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
      if ((vec.at(i) % 2) == 0) {
        vec.at(i) = vec.at(i) / 2;
      } else {
        //奇数が見つかった場合は中断してループを抜ける
        isOdd = true;
        break;
      }
    }
    //奇数フラグがtrueの場合ループを抜けて終了
    if (isOdd) {
      break;
    } else {
      //奇数フラグがfalseなので計算回数を加算してループ継続
      result++;
    }
  }

  cout << result << endl;
}