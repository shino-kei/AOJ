#include <string>
#include <iostream>
#include <stdio.h>
#include <list>
#include <cmath>

using namespace std;

int main() {
  ios::sync_with_stdio(false);

  list<int> lst;
  auto itr = lst.begin();

  int length;
  int cmd, val;

  cin >> length;

  for (int i = 0; i < length; i++) {
    cin >> cmd;
    switch (cmd) {
      // insert
      case 0:
        cin >> val;
        itr = lst.insert(itr, val);

        break;

      // move
      case 1:
        cin >> val;
        for (int j = 0; j < abs(val); j++) {
          if (val > 0) {
            itr++;
          } else {
            itr--;
          }
        }
        break;

      // erase
      case 2:
        itr = lst.erase(itr);
        break;
    }
  }

  for (auto itr = lst.begin(); itr != lst.end(); itr++) {
    cout << *itr << endl;
  }
}

