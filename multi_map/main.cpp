#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  multimap<string, int> m;

  int cmd, val;
  string lhd, rhd;
  string key;

  for (int i = 0; i < n; i++) {
    cin >> cmd;

    switch (cmd) {
      case 0:
        cin >> key >> val;
        m.insert(make_pair(key, val));
        break;

      case 1: {
        cin >> key;
        auto p = m.equal_range(key);
        for (auto itr = p.first; itr != p.second; itr++) {
          cout << itr->second << endl;
        }

        break;
      }

      case 2:
        cin >> key;
        m.erase(key);
        break;

      case 3: {
        cin >> lhd >> rhd;

        auto end = m.upper_bound(rhd);
        for (auto itr = m.lower_bound(lhd); itr != end; itr++) {
          cout << itr->first << " " << itr->second << endl;
        }
        break;
      }
    }
  }
}

