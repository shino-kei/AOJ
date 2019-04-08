#include <string>
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> v;
  int last_num, tmp;
  for (int i = 0; i < n; i++) {
    cin >> tmp;

    if (i == 0) {
      last_num = tmp;
      v.push_back(tmp);
      continue;
    }

    if (last_num != tmp) {
      v.push_back(tmp);
      last_num = tmp;
    }
  }

  for (int i = 0; i < v.size(); i++) {
    if (i) {
      cout << " ";
    }
    cout << v[i];
  }
  cout << endl;
}

