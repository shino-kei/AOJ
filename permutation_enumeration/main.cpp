#include <bits/stdc++.h>

using namespace std;

void output(vector<int> v) {
  int n = v.size();

  for (int i = 0; i < n; i++) {
    if (i)
      cout << " ";
    cout << v[i];
  }
  cout << endl;
}

template <typename IteratorType>
IteratorType next_element(int ref, IteratorType begin, IteratorType end) {
  int min = 1000000;
  auto next_itr = begin;
  for (auto itr = begin; itr != end; itr++) {
    if (*itr > ref && *itr < min) {
      min = *itr;
      next_itr = itr;
    }
  }
  return next_itr;
}

template <typename IteratorType>
IteratorType prev_element(int ref, IteratorType begin, IteratorType end) {
  int max = 0;
  auto prev_itr = begin;
  for (auto itr = begin; itr != end; itr++) {
    if (*itr<ref&& * itr> max) {
      max = *itr;
      prev_itr = itr;
    }
  }
  return prev_itr;
}

bool next_permutation(vector<int>& pv) {
  for (auto itr = pv.rbegin(); next(itr, 1) != pv.rend(); itr++) {
    if (*next(itr, 1) < *itr) {
      iter_swap(next_element<decltype(itr)>(*next(itr), pv.rbegin(), next(itr)), next(itr, 1));
      sort(pv.rbegin(), next(itr), greater<int>());
      return 1;
    }
  }
  return 0;
}

bool prev_permutation(vector<int>& pv) {
  for (auto itr = pv.rbegin(); next(itr, 1) != pv.rend(); itr++) {
    if (*next(itr, 1) > *itr) {
      iter_swap(prev_element<decltype(itr)>(*next(itr), pv.rbegin(), next(itr)), next(itr, 1));
      sort(pv.rbegin(), next(itr), less<int>());
      return 1;
    }
  }
  return 0;
}

int factorial(int n) {
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

int main() {
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> pv(n), v(n), nv(n);

  for (int i = 0; i < n; i++) {
    v[i] = i + 1;
  }

  output(v);

  int num_loop = factorial(n);
  nv = v;
  for (int i = 0; i < num_loop; i++) {
    if (next_permutation(nv) == true) {
      output(nv);
    }
  }

  return 0;
}
