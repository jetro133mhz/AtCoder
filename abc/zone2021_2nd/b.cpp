#include <bits/stdc++.h>

using namespace std;


int main() {
  int n;
  double d, h;
  cin >> n >> d >> h;

  vector<double> vec_d(n);
  vector<double> vec_h(n);
  vector<double> result(n);

  for (int i = 0; i < n; ++i) {
    cin >> vec_d.at(i);
    cin >> vec_h.at(i);

    //傾き
    double a = ((double) h - (double) vec_h.at(i)) / ((double) d - (double) vec_d.at(i));
    //切片
    double b = (double) vec_h.at(i) - (double) a * (double) vec_d.at(i);
    result.at(i) = b;
  }

  //各切片のうち最大値を返す 切片が負の値になる場合は0を返す
  sort(result.begin(), result.end());
  if (result.at(result.size() - 1) <= 0) {
    cout << 0 << endl;
  } else {
    cout << result.at(result.size() - 1) << endl;
  }
}