#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int n_mask;
  cin >> n_mask;

  vector<bitset<64>> mask(n_mask);
  int n_bit, tmp;
  for (int i = 0; i < n_mask; i++) {
    cin >> n_bit;
    for (int j = 0; j < n_bit; j++) {
      cin >> tmp;
      mask[i].set(tmp);
    }
  }

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
        bs |= mask[val];
        break;

      case 2:
        cin >> val;
        bs &= ~mask[val];
        break;

      case 3:
        cin >> val;
        bs ^= mask[val];
        break;

      case 4: {  //  all
        cin >> val;
        bitset<64> temp(0);
        temp = bs & mask[val];
        if (temp == mask[val]) {
          cout << 1 << endl;
        } else {
          cout << 0 << endl;
        }
        break;
      }

      case 5:  // any
      {
        cin >> val;
        bitset<64> temp(0);
        temp = bs & mask[val];
        if (temp != 0) {
          cout << 1 << endl;
        } else {
          cout << 0 << endl;
        }
        break;
      }

      case 6:  // none
      {
        cin >> val;
        bitset<64> temp(0);
        temp = bs & mask[val];
        if (temp == 0) {
          cout << 1 << endl;
        } else {
          cout << 0 << endl;
        }
        break;
      }

      case 7: {
        cin >> val;
        bitset<64> temp(0);
        temp = bs & mask[val];
        cout << temp.count() << endl;
        break;
      }

      case 8: {
        cin >> val;
        bitset<64> temp(0);
        temp = bs & mask[val];
        cout << temp.to_ullong() << endl;
        break;
      }
    }
  }
}

