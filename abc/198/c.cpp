#include <bits/stdc++.h>

using namespace std;

int main() {
  double r, x, y;
  cin >> r >> x >> y;

  double distance = sqrt(x * x + y * y);
  double result = 0;

  //直線移動で何歩必要か数える
  result = ceil(distance / r);
  //距離より歩幅の方が多い場合は2歩必要
  if (r > distance) {
    result++;
  }
  cout << result << endl;
}