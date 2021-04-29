#include <bits/stdc++.h>

using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<int>> B(w, vector<int>(h));
  vector<int> sum_h(h, 0);
  vector<int> sum_w(w, 0);
  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      cin >> B.at(j).at(i);
      //各行、各列の和を予め計算して格納しておく
      sum_h.at(i) += B.at(j).at(i);
      sum_w.at(j) += B.at(j).at(i);
    }
  }

  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      int sum = 0;
      cout <<  sum_h.at(i) + sum_w.at(j) - B.at(j).at(i);
      if (j != w - 1) {
        cout << " ";
      }
    }
    cout << endl;
  }
}