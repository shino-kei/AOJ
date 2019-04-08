#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  int v[n];
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int q;
  cin >> q;

  int b, e, t;
  for (int i = 0; i < q; i++) {
    cin >> b >> e >> t;
    swap_ranges(v + b, v + e, v + t);
  }

  for (int i = 0; i < n; i++) {
    if (i)
      cout << " ";
    cout << v[i];
  }
  cout << endl;
}
