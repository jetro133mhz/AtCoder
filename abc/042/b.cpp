#include <bits/stdc++.h>

using namespace std;


int main() {
  int n, l;
  cin >> n >> l;
  //文字列を一旦配列に格納し、ソートした結果をそのまま出力すればいい
  vector<string> vec_s(n);
  for (int i = 0; i < n; ++i) {
    cin >> vec_s.at(i);
  }

  sort(vec_s.begin(), vec_s.end());

  for (int i = 0; i < n; ++i) {
    cout << vec_s.at(i);
  }
  cout << endl;
}