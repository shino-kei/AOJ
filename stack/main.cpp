#include <string>
#include <iostream>
#include <stdio.h>
#include <stack>

using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int cmd, index, val;
  int num_stack, num_query;

  cin >> num_stack >> num_query;
  stack<int> st[num_stack];

  for (int i = 0; i < num_query; i++) {
    cin >> cmd;

    switch (cmd) {
      // push
      case 0:
        cin >> index >> val;
        st[index].push(val);

        break;
      // top
      case 1:
        cin >> index;
        if (st[index].empty()) {
          break;
        }
        cout << st[index].top() << endl;
        break;
      // pop
      case 2:
        cin >> index;
        if (st[index].empty()) {
          break;
        }
        st[index].pop();
        break;
    }
  }
}

