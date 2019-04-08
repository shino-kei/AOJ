#include <bits/stdc++.h>

using namespace std;

class info {
public:
  int val, weight;
  char type;
  long date;
  string name;

  info(){};
  info(int v, int w, char t, long d, string s) {
    val = v;
    weight = w;
    type = t;
    date = d;
    name = s;
  }

  friend ostream& operator<<(ostream& os, const info& d);

  bool operator<(const info& right) const {
    if (val != right.val) {
      return val < right.val;
    }
    if (weight != right.weight) {
      return weight < right.weight;
    }
    if (type != right.type) {
      return type < right.type;
    }
    if (date != right.date) {
      return date < right.date;
    }
    if (name != right.name) {
      return name < right.name;
    }
    return 1;
  }
};

ostream& operator<<(ostream& os, const info& d) {
  os << d.val << " " << d.weight << " " << d.type << " " << d.date << " " << d.name;
  return os;
}

int main() {
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<info> vec(n);

  int v, w;
  char t;
  long d;
  string s;

  for (int i = 0; i < n; i++) {
    cin >> v >> w >> t >> d >> s;
    // cout << v << " " << w << " " << t << " " << d << " " << s << endl;
    vec[i] = info(v, w, t, d, s);
  }

  sort(vec.begin(), vec.end());
  for (int i = 0; i < n; i++) {
    cout << vec[i] << endl;
  }
}

