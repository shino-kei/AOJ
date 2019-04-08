#include <string>
#include <iostream>
#include <stdio.h>
#include <deque>

using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int num_query;
  cin >> num_query;

  int command, dir, val;
  deque<int> q;
  for (int i = 0; i < num_query; i++) {
    cin >> command;

    switch (command) {
      case 0:
        // push
        cin >> dir;
        cin >> val;
        if (dir == 0) {
          q.push_front(val);
        } else {
          q.push_back(val);
        }
        break;

      // random access
      case 1:
        cin >> val;
        cout << q[val] << endl;
        break;

      // pop
      case 2:
        cin >> dir;
        if (dir == 0) {
          q.pop_front();
        } else {
          q.pop_back();
        }

        break;
    }
  }
}

