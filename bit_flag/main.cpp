#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  int cmd;

  bitset<64> bs(0);
  int val;
  for (int i = 0; i < n; i++) {
    cin >> cmd;
    switch (cmd) {
      case 0:
        cin >> val;
        cout << bs.test(val) << endl;
        break;

      case 1:
        cin >> val;
        bs.set(val);
        break;

      case 2:
        cin >> val;
        bs.reset(val);
        break;

      case 3:
        cin >> val;
        bs.flip(val);
        break;

      case 4:
        cout << bs.all() << endl;
        break;

      case 5:
        cout << bs.any() << endl;
        break;

      case 6:
        cout << bs.none() << endl;
        break;

      case 7:
        cout << bs.count() << endl;
        break;

      case 8:
        cout << bs.to_ullong() << endl;
    }
  }
}

