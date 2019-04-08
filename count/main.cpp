#include <string>
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int len_array, num_query;
  int b, e, k;
  int counter;

  cin >> len_array;
  vector<int> v(len_array);

  for (int i = 0; i < len_array; i++) {
    cin >> v[i];
  }

  cin >> num_query;
  for (int i = 0; i < num_query; i++) {
    cin >> b >> e >> k;
    counter = 0;

    for (int j = b; j < e; j++) {
      if (v[j] == k) {
        counter++;
      }
    }
    cout << counter << endl;
  }
}

