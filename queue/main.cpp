#include <string>
#include <iostream>
#include <stdio.h>
#include <queue>

using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int num_queue, num_query;
  int cmd, index, val;

  cin >> num_queue >> num_query;
  queue<int> q[num_queue];

  for (int i = 0; i < num_query; i++) {
    cin >> cmd;

    switch (cmd) {
      // enqueue
      case 0:
        cin >> index >> val;
        q[index].push(val);

        break;

      case 1:
        cin >> index;
        if (!q[index].empty()) {
          cout << q[index].front() << endl;
        }

        break;

      case 2:
        cin >> index;
        if (!q[index].empty()) {
          q[index].pop();
        }
        break;
    }
  }
}

