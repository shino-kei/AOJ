#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n;
  vector<int> v1(n);

  int tmp;
  for (int i = 0; i < n; i++) {
    cin >> tmp;
    v1[i] = tmp;
  }

  cin >> m;
  vector<int> v2(m);
  for (int i = 0; i < m; i++) {
    cin >> tmp;
    v2[i] = tmp;
  }

  vector<int> r;
  set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), inserter(r, r.end()));

  for (int i = 0; i < r.size(); i++) {
    cout << r[i] << endl;
  }
}

