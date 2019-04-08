#include <string>
#include <iostream>
#include <stdio.h>
#include <list>

using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int len_array;
  cin >> len_array;

  list<int> lst;

  int tmp;
  for (int i = 0; i < len_array; i++) {
    cin >> tmp;
    lst.push_back(tmp);
  }

  int num_query;
  cin >> num_query;

  int b, m, e;
  for (int i = 0; i < num_query; i++) {
    cin >> b >> m >> e;
    if (b == m || m == e) {
      continue;
    }

    auto head = next(lst.begin(), m);
    auto tail = next(lst.begin(), e);

    lst.splice(next(lst.begin(), b), lst, head, tail);
  }

  auto itr = lst.begin();
  cout << *itr++;
  for (int i = 1; i < len_array; i++, itr++) {
    cout << " " << *itr;
  }

  cout << endl;
  return 0;
}
