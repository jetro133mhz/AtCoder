#include <bits/stdc++.h>

using namespace std;

int main() {
  double r, x, y;
  cin >> r >> x >> y;

  double distance = sqrt(x * x + y * y);
  int result = 0;

  while (distance > r) {
    //直線移動で何歩必要か数える
    distance -= r;
    result++;
  }

  //小数点以下の端数が残る場合はもう1歩必要なため、resultに加算
  //TODO どうも違うようなので再考察
  if (distance > 0) {
    result++;
  }
  cout << result << endl;
}