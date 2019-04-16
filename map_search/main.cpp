#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  map<string, int> m;

  int cmd, val;
  string key;
  for (int i = 0; i < n; i++) {
    cin >> cmd;
    if (cmd == 0) {
      cin >> key >> val;
      m[key] = val;
    } else {
      cin >> key;
      cout << m.at(key) << endl;
    }
  }
}

