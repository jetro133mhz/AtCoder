#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int count_5 = 0;
  int count_7 = 0;

  if (a == 5) {
    count_5++;
  }
  if (b == 5) {
    count_5++;
  }
  if (c == 5) {
    count_5++;
  }

  if (a == 7) {
    count_7++;
  }
  if (b == 7) {
    count_7++;
  }
  if (c == 7) {
    count_7++;
  }

  if (count_7 == 1 && count_5 == 2) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}