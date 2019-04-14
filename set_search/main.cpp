#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  int cmd, val;
  unordered_set<int> s;

  for (int i = 0; i < n; i++) {
    cin >> cmd >> val;
    if (cmd == 0) {
      s.insert(val);
      cout << s.size() << endl;
    } else {
      auto it = s.find(val);
      if (it != s.end()) {
        cout << 1 << endl;
      } else {
        cout << 0 << endl;
      }
    }
  }
}

