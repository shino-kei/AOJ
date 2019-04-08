#include <string>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int len_array, num_query;
  cin >> len_array;
  vector<int> v(len_array);

  int tmp;
  for (int i = 0; i < len_array; i++) {
    cin >> tmp;
    v[i] = tmp;
  }

  cin >> num_query;

  int cmd, b, e;
  int min, max;
  for (int i = 0; i < num_query; i++) {
    cin >> cmd >> b >> e;

    min = v[b];
    max = v[b];
    if (cmd) {
      for (int j = b; j < e; j++) {
        if (max < v[j]) {
          max = v[j];
        }
      }
      cout << max << endl;
    } else {
      for (int j = b; j < e; j++) {
        if (min > v[j]) {
          min = v[j];
        }
      }
      cout << min << endl;
    }
  }
}

