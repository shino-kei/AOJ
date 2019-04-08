#include <string>
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

void reverse(vector<int>::iterator first, vector<int>::iterator last) {
  for (; first != last && first != --last; ++first) {
    iter_swap(first, last);
  }
}

int main() {
  ios::sync_with_stdio(false);

  int len_array;
  cin >> len_array;
  vector<int> v(len_array);

  for (int i = 0; i < len_array; i++) {
    cin >> v[i];
  }

  int num_query;
  cin >> num_query;

  int b, e;
  for (int i = 0; i < num_query; i++) {
    cin >> b >> e;
    reverse(v.begin() + b, v.begin() + e);
  }

  cout << *v.begin();
  for (auto it = v.begin() + 1, e = v.end(); it != e; ++it) {
    cout << " " << *it;
  }
  cout << endl;
}

