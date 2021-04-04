#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  for (int i = 0; i < N; i++) {
    int B;
    cin >> B;
    if (B == 0) {
      cout << "error" << endl;
      break;
    }
    cout << i + 1 << ":" << endl;
  }
}
