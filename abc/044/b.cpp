#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;

  if ((s.size() % 2) != 0) {
    //文字長が奇数の場合は No
    cout << "No" << endl;
  } else {
    //文字長が偶数の場合
    //文字列をソートし、2文字ずつ同じ文字が並んでいる状態になっていれば Yes
    bool flag = true;
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size() - 1; i += 2) {
      //1箇所でも並んでいない箇所が見つかった場合は No にして終了
      if (s.at(i) != s.at(i + 1)) {
        flag = false;
        break;
      }
    }
    //結果出力
    if (flag) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
}