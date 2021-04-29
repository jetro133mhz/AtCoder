#include <bits/stdc++.h>

using namespace std;

int main() {
  //TLEになるので駄目
  int h, w;
  cin >> h >> w;
  vector<vector<int>> B(w, vector<int>(h));
  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      cin >> B.at(j).at(i);
    }
  }

  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      int sum = 0;
      for (int k = 0; k < w; ++k) {
        sum += B.at(k).at(i);
      }
      for (int k = 0; k < h; ++k) {
        sum += B.at(j).at(k);
      }
      cout << sum - B.at(j).at(i);
      if (j != w - 1) {
        cout << " ";
      }
    }
    cout << endl;
  }
}