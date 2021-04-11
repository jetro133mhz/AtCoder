#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;

  //結果格納用変数
  int result = 0;

  if (N == 1) {
    //N==1の場合分けることが出来ないので0を返して終了
    result = 0;
  } else if (N == 2) {
    //N==2の場合1通りとなるので1を返して終了
    result = 1;
  } else {
    //それ以外の場合 考察より N-1 となるようなのでそのまま出力
    result = N - 1;
  }
  cout << result << endl;
}