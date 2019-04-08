#include <string>
#include <iostream>
#include <stdio.h>
#include <list>

using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int cmd, index, val, dst;
  int num_query, num_list;

  cin >> num_list >> num_query;
  list<int> lst[num_list];

  for (int i = 0; i < num_query; i++) {
    cin >> cmd;
    switch (cmd) {
      case 0:
        cin >> index >> val;
        lst[index].push_back(val);
        break;

      case 1:
        cin >> index;
        if (lst[index].empty()) {
          cout << endl;
        } else {
          for (auto itr = lst[index].begin(); itr != prev(lst[index].end(), 1); itr++) {
            cout << *itr << " ";
          }
          cout << lst[index].back() << endl;
        }

        break;

      case 2:
        cin >> index >> dst;
        lst[dst].splice(lst[dst].end(), lst[index]);
        lst[index].clear();
        break;
    }
  }
}

