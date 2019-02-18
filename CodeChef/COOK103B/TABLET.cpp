/*
    Author: abhishalya
*/
#include <bits/stdc++.h>
using namespace std;

const int MAX = (int)1e5 + 5;

int main() {
  int t; cin >> t;
  while(t--) {
    int n, b;
    cin >> n >> b;
    int mx = 0;
    for(int i = 0; i < n; i++) {
      int w, h, p;
      cin >> w >> h >> p;
      if(p <= b)
      mx = max(mx, w * h);
    }
    if(mx != 0) cout << mx << endl;
    else cout << "no tablet" << endl;
  }
  return 0;
}