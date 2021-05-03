#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k, x, y;
  cin >> n >> k >> x >> y;
  //宿泊日数が最初のK泊以下の場合がある
  if (n - k < 0) {
    cout << n * x << endl;
  } else {
    cout << k * x + (n - k) * y << endl;
  }
}