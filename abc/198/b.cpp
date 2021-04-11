#include <bits/stdc++.h>

using namespace std;


int main() {
  string N1, N2;
  cin >> N1;
  int count = N1.size();
  bool result = false;
  for (int i = 0; i < count; ++i) {
    N2 = N1;
    reverse(N2.begin(), N2.end());
    if (N1 == N2) {
      cout << "Yes" << endl;
      result = true;
      break;
    } else {
      N1.insert(0, "0");
      reverse(N2.begin(), N2.end());
      if (N1 == N2) {
        cout << "Yes" << endl;
        result = true;
        break;
      }
    }
  }
  if (!result) {
    cout << "No" << endl;
  }
}