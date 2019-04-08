#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  int length;

  cin >> length;

  vector<int> q;

  int opr, val;
  for (int i = 0; i < length; i++) {
    cin >> opr;

    switch (opr) {
      case 0:
        cin >> val;
        q.push_back(val);
        break;

      case 1:
        cin >> val;
        cout << q[val] << endl;
        break;

      case 2:
        q.pop_back();
        break;
    }
  }
}

