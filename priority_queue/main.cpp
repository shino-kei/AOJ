#include <string>
#include <iostream>
#include <stdio.h>
#include <queue>

using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int cmd, index, val;
  int num_query, num_queue;

  cin >> num_queue >> num_query;
  priority_queue<int> que[num_queue];

  for (int i = 0; i < num_query; i++) {
    cin >> cmd;
    switch (cmd) {
      case 0:
        cin >> index >> val;
        que[index].push(val);

        break;

      case 1:
        cin >> index;
        if (!que[index].empty()) {
          cout << que[index].top() << endl;
        }
        break;

      case 2:
        cin >> index;
        if (!que[index].empty()) {
          que[index].pop();
        }
        break;
    }
  }
}

