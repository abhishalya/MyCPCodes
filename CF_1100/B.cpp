#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  int a[m];
  for(int i = 0; i < m; i++) {
    cin >> a[i];
  }
  int j = 0; map<int, int> mp, mp2;
  string ans = ""; int rnd = 0, cnt = 0;
  for(int i = 0; i < m; i++) {
    mp[a[i]]++; mp2[mp[a[i]]]++;
    if(mp[a[i]] == 1) j++;
    if(j != 0 && j % n == 0) {
      ans += '1';
      rnd++;
      mp2[1] = 0;
    }
    else ans += '0';
  }
  cout << ans << endl;
  return 0;
}
