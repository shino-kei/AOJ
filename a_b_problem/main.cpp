#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
  ios::sync_with_stdio(false);
    
  int a,b;

  cin >> a >> b;

  int out1 = (int)a/b;
  int out2 = a%b;
  double out3 = (double)a/b;


  // cout << a << b << endl;
  // cout << out1 << "  "<< out2 << "  "<< out3 << "  " << endl;
  printf("%d %d %.5f", out1, out2, out3);

}

