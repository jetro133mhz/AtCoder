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

  //次の配列に格納された餅のサイズが同じサイズではない場合はカウントアップする
  int num = 1;
  for (int i = 0; i < N - 1; i++) {
    if (vec.at(i) != vec.at(i + 1)) {
      num++;
    }
  }

  cout << num << endl;
}