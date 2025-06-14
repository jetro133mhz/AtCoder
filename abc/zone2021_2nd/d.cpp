#include <bits/stdc++.h>

using namespace std;

int main() {
  string s, t;
  cin >> s;
  bool isReverse = false;
  for (int i = 0; i < s.size(); ++i) {
    if (s.at(i) == 'R') {
      isReverse =!isReverse;
      //reverse(t.begin(), t.end());
    } else {
      if(isReverse){
        t.push_front(s.at(i));
      } else {
        t.push_back(s.at(i));
      }
    }
  }

  bool flag = true;
  while (flag) {
    int count = 0;
    for (int i = 0; i < t.size() - 1; ++i) {
      //処理の過程で空文字になっている場合があるのでチェックする
      if (t.empty()) {
        break;
      }
      if (t.at(i) == t.at(i + 1)) {
        t.erase(i, 2);
        count++;
      }
    }
    if (count == 0) {
      flag = false;
    }
  }

  cout << t;
}