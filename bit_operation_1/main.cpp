#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);

  unsigned long a, b;
  cin >> a >> b;
  bitset<32> bsa(a);
  bitset<32> bsb(b);

  cout << (bsa & bsb) << endl;
  // cout << bsa | bsb << endl;
  // cout << bsa ^ bsb << endl;
}

