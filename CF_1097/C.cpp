#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int b[n]; string s[n];
  map<int, int> a;
  for(int i = 0; i < n; i++) {
    cin >> s[i];
  }
  for(int i = 0; i < n; i++) {
    int cnt = 0;
    for(int j = 0; j < s[i].length(); j++) {
      if(s[i][j] == '(') cnt++;
      else cnt--;
    }
    a[cnt]++; b[i] = cnt;
  }
  int cnt = a[0] / 2;
  for(int i = 0; i < n; i++) {
    if(b[i] == 0) continue;
    // cout << b[i] << " " << a[b[i]] << " " << a[-b[i]] << endl;
    // if(a[b[i]] && a[-b[i]]) {
    //   cnt++;
    //   a[-b[i]]--;
    //   a[b[i]]--;
    // }
    cnt += min(a[b[i]], a[-b[i]]);
    a[b[i]] = 0, a[-b[i]] = 0;
  }
  cout << cnt << endl;
  return 0;
}
