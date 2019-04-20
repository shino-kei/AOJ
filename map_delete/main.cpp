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

    switch (cmd) {
      case 0:
        cin >> key >> val;
        m[key] = val;
        break;

      case 1:
        cin >> key;
        try {
          cout << m.at(key) << endl;
        } catch (out_of_range&) {
          cout << 0 << endl;
        }
        break;

      case 2:
        cin >> key;
        m.erase(key);
        break;
    }
  }
}

