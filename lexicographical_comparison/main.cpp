#include <string>
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int len_a, len_b;

  cin >> len_a;
  vector<int> vecA(len_a);
  for (int i = 0; i < len_a; i++) {
    cin >> vecA[i];
  }

  cin >> len_b;
  vector<int> vecB(len_b);
  for (int i = 0; i < len_b; i++) {
    cin >> vecB[i];
  }

  int len_min = min(len_a, len_b);
  for (int i = 0; i < len_min; i++) {
    if (vecB[i] > vecA[i]) {
      cout << 1 << endl;
      return 0;  // end
    } else if (vecB[i] < vecA[i]) {
      cout << 0 << endl;
      return 0;  // end
    } else {
      continue;
    }
  }

  if (len_b > len_a) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }

  return 0;
}

