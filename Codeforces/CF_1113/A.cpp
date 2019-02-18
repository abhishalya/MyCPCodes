#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, v;
  cin >> n >> v;
  int fu = min(v, n - 1);
  int ans = fu;
  for(int i = 2; i <= n; i++) {
    fu--;
    if(fu < n - i) {
      ans += i; fu++;
    }
  }
  cout << ans << endl;
  return 0;
}
