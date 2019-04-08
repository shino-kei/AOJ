#include <bits/stdc++.h>

using namespace std;

// int binary_search(vector<int>& v, int istart, int iend, int value) {
//   int n = v.size();
//
//   if (istart > iend)
//     return 0;
//
//   int imid = istart + (iend - istart) / 2;
//   if (v[imid] > value) {
//     return binary_search(v, istart, imid - 1, value);
//   } else if (v[imid] < value) {
//     return binary_search(v, imid + 1, iend, value);
//   } else {
//     return 1;
//   }
//   return -1;
// }

int binary_search(vector<int>& v, int istart, int iend, int value) {
  int left = istart;
  int right = iend;

  int imid;
  while (left < right) {
    imid = left + (right - left) / 2;

    if (v[imid] == value)
      return 1;  // found the value in the array

    if (v[imid] > value) {
      right = imid - 1;
    } else {
      left = imid + 1;
    }
  }
  return 0;  // not found
}

int main() {
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int num_query;
  cin >> num_query;

  int query = 0;
  for (int i = 0; i < num_query; i++) {
    cin >> query;

    cout << binary_search(v, 0, n - 1, query) << endl;
  }
}

