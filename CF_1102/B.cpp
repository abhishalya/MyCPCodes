#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k; cin >> n >> k;
  int a[n], b[n];
  map<int, int> fq, fq2;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    b[i] = a[i];
  }
  sort(b, b + n);
  int mx = 0, cnt = 1;
  for(int i = 1; i < n; i++) {
    if(b[i] == b[i - 1]) {
      cnt++;
    } else {
      mx = max(mx, cnt);
      cnt = 1;
    }
  }
  if(k >= mx && k <= n) {
    cout << "YES\n"; int j = 0;
    for(int i = 0; i < n; i++) {
      if(fq[a[i]] >= 1) {
        cout << (fq2[a[i]] % k) + 1 << " ";
        fq2[a[i]] = (fq2[a[i]] % k) + 1;
      } else {
        cout << (j % k) + 1 << " ";
        fq2[a[i]] = (j % k) + 1;
        j++;
      }
      fq[a[i]]++;
    }
    cout << endl;
  } else {
    cout << "NO\n";
  }
  return 0;
}
