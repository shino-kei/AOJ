#include <bits/stdc++.h>

using namespace std;

int binary_search(vector<int>& v, int istart, int iend, int value) {
  int n = v.size();

  if (istart > iend)
    return 0;

  int imid = istart + (iend - istart) / 2;
  if (v[imid] > value) {
    return binary_search(v, istart, imid - 1, value);
  } else if (v[imid] < value) {
    return binary_search(v, imid + 1, iend, value);
  } else {
    return 1;
  }
  return -1;
}

int main() {
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> va(n);
  for (int i = 0; i < n; i++) {
    cin >> va[i];
  }

  cin >> n;
  vector<int> vb(n);
  for (int i = 0; i < n; i++) {
    cin >> vb[i];
  }

  bool result = 1;
  for (int i = 0; i < n; i++) {
    result &= binary_search(va, 0, va.size() - 1, vb[i]);
  }

  cout << result << endl;
}
