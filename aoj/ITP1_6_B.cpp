#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> vec_s(13);
  vector<int> vec_h(13);
  vector<int> vec_c(13);
  vector<int> vec_d(13);

  char mark;
  int number;
  for (int i = 0; i < n; ++i) {
    cin >> mark >> number;
    if (mark == 'S') {
      vec_s.push_back(number);
      vec_s.erase(vec_s.begin());
    } else if (mark == 'H') {
      vec_h.push_back(number);
      vec_h.erase(vec_h.begin());
    } else if (mark == 'C') {
      vec_c.push_back(number);
      vec_c.erase(vec_c.begin());
    } else if (mark == 'D') {
      vec_d.push_back(number);
      vec_d.erase(vec_d.begin());
    }
  }

  sort(vec_s.begin(), vec_s.end());
  sort(vec_h.begin(), vec_h.end());
  sort(vec_c.begin(), vec_c.end());
  sort(vec_d.begin(), vec_d.end());

//  for (int i = 0; i < 13; ++i) {
//    cout << vec_s.at(i) << endl;
//  }
  int count = 1;
  for (int i = 0; i < 13; ++i) {
    if (vec_s.at(i) != 0) {
      if (vec_s.at(i) != count) {
        cout << "S" << count << " " << vec_s.at(i) << endl;
      }
      count++;
    }
  }
}