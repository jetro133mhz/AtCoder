#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b;
  string op;
  cin >> a >> op >> b;
  if (op == "+") {
    cout << a + b << endl;
  } else {
    cout << a - b << endl;
  }
}