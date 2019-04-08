#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int num_buf, length;
  cin >> num_buf >> length;

  int cmd, index, val;

  vector<list<int>> arr(num_buf);

  for (int i = 0; i < length; i++) {
    cin >> cmd;
    switch (cmd) {
      // push back
      case 0:
        cin >> index >> val;
        arr[index].push_back(val);

        break;

      // dump
      case 1:
        cin >> index;

        if (!arr[index].empty()) {
          for (auto itr = arr[index].begin(); itr != prev(arr[index].end(), 1); itr++) {
            // cout << " " << *itr;
            cout << *itr << " ";
          }
          cout << arr[index].back() << endl;
        } else {
          cout << endl;
        }

        break;

      // clear
      case 2:
        cin >> index;
        arr[index].clear();
        break;
    }
  }
}

