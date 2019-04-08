#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  vector<int> v(3);

  cin >> v[0] >> v[1] >> v[2];
  sort(v.begin(), v.end());

  cout << v[0] << " " << v[2] << endl;
}

