#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
      cin >> b[i];
    }
    int fl = 0;
    if(a[0] != 0 || b[n - 1] != 0) fl = 1;
    else {
      for(int i = 1; i < n - 1; i++) {
        if(a[i] != b[n - i - 1]) {
          fl = 1; break;
        }
        if(2 * a[i] < a[n - 1]) {
          fl = 1; break;
        }
      }
    }
    if(fl) cout << "No\n";
    else cout << "Yes\n";
  }
  return 0;
}
