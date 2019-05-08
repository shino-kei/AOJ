#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  int n_subsets = pow(2, n);

  int n_mask_bits;
  cin >> n_mask_bits;

  bitset<18> mask(0);
  // make mask
  for (int i = 0; i < n_mask_bits; i++) {
    int tmp;
    cin >> tmp;
    mask.set(tmp);
  }

  // output only if masked bit is set
  for (int i = 0; i < n_subsets; i++) {
    bitset<18> bs(i);
    if ((bs & mask) == mask) {
      cout << i << ":";
      for (int j = 0; j < 18; j++) {
        if (bs.test(j)) {
          cout << " " << j;
        }
      }
      cout << endl;
    }
  }
}

