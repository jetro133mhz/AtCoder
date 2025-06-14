#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
  if (a % b == 0) {
    return b;
  } else {
    return gcd(b, a % b);
  }
}

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int can_div_c = 0;
  int can_div_d = 0;
  int can_div_c_d = 0;

  for (int i = a; i <= b; ++i) {
    can_div_c = i / c;
    can_div_d = i / d;
    can_div_c_d = c / gcd(a, b) * d;
  }

  cout << (b - a + 1) - can_div_c - can_div_d + can_div_c_d;
}