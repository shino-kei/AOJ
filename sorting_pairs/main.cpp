#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<pair<int, int>> v;
  int x, y;
  for (int i = 0; i < n; i++) {
    cin >> x >> y;
    v.push_back(pair<int, int>(x, y));
  }

  sort(v.begin(), v.end(), [&v](pair<int, int> pl, pair<int, int> pr) {
    if (pl.first != pr.first) {
      return pl.first < pr.first;
    }
    return pl.second < pr.second;
  });

  for (int i = 0; i < n; i++) {
    cout << v[i].first << " " << v[i].second << endl;
  }
}

