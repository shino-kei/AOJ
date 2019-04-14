#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  int cmd, val;
  int lhd, rhd;

  set<int> s;
  set<int>::iterator it;
  for (int i = 0; i < n; i++) {
    cin >> cmd;
    switch (cmd) {
      case 0:
        cin >> val;
        s.insert(val);
        cout << s.size() << endl;
        break;

      case 1:
        cin >> val;
        cout << s.count(val) << endl;
        break;

      case 2:
        cin >> val;
        s.erase(val);
        break;

      case 3:
        cin >> lhd >> rhd;

        for (auto itr = s.lower_bound(lhd); itr != s.end() && *itr <= rhd; itr++) {
          cout << *itr << endl;
        }
        break;
    }
  }
}

