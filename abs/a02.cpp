#include <bits/stdc++.h>

using namespace std;

//ABC086A - Product
int main() {
  int a, b;
  cin >> a >> b;
  if ((a * b % 2) == 0) {
    cout << "Even";
  } else {
    cout << "Odd";
  }
}