#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  set<int> s;

  int cmd, val;
  set<int>::iterator it;
  for (int i = 0; i < n; i++) {
    cin >> cmd >> val;

    switch (cmd) {
      case 0:
        s.insert(val);
        cout << s.size() << endl;
        break;

      case 1:
        it = s.find(val);
        if (it != s.end() && *it == val) {
          cout << 1 << endl;
        } else {
          cout << 0 << endl;
        }
        break;

      case 2:
        it = s.find(val);
        if (it != s.end()) {
          s.erase(it);
        }
        break;
    }
  }
}

