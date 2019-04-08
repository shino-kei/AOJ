#include <bits/stdc++.h>

using namespace std;

int main() {
  int len_a, len_b;

  cin >> len_a;
  vector<int> a(len_a);
  for (int i = 0; i < len_a; i++) {
    cin >> a[i];
  }

  cin >> len_b;
  vector<int> b(len_b);
  for (int i = 0; i < len_b; i++) {
    cin >> b[i];
  }

  cout << lexicographical_compare(a.begin(), a.end(), b.begin(), b.end()) << endl;
}
