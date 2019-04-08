#include <string>
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

void swap(vector<int> &arr, int b, int e, int t) {
  int tmp;
  for (int k = 0; k < e - b; k++) {
    tmp = arr[b + k];
    arr[b + k] = arr[t + k];
    arr[t + k] = tmp;
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
  int b, e, t;
  for (int i = 0; i < num_query; i++) {
    cin >> b >> e >> t;
    swap(v, b, e, t);
  }

  cout << v[0];
  for (int i = 1; i < len_array; i++) {
    cout << " " << v[i];
  }
  cout << endl;
}

