#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> scores(N);
  for (int i = 0; i < N; i++) {
    cin >> scores.at(i);
  }

  //点数の合計値を計算
  int sum = 0;
  for (int i = 0; i < N; i++) {
    sum += scores.at(i);
  }

  //平均点を計算
  int average = 0;
  average = sum / N;

  //点差を出力
  for (int i = 0; i < N; i++) {
    if (scores.at(i) > average) {
      cout << scores.at(i) - average << endl;
    } else {
      cout << average - scores.at(i) << endl;
    }
  }
}