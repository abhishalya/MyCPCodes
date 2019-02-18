/*
    Author: abhishalya
*/
#include <bits/stdc++.h>
using namespace std;

const int MAX = (int)1e5 + 5;

int main() {
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a, a + n);
    int cnt = 0;
    for(int i = 0; i < n; i++) {
      if(cnt >= a[i]) cnt++;
    }
    cout << cnt << endl;
  }
  return 0;
}