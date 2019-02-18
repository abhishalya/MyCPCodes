#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int a[n], sum = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  sort(a, a + n);
  int op1, op2, org, mnn = INT_MAX;
  for(int i = n - 1; i >= 0; i--) {
    for(int j = 1; j * j <= a[i]; j++) {
      if(a[i] % j == 0) {
        op1 = min(j, a[i] / j);
        op2 = max(j, a[i] / j);
        org = a[i];
      }
      mnn = min(mnn, min(a[0] * op2 - a[0] - (org - (org / op2)),
                a[0] * op1 - a[0] - (org - (org / op1))));
      // cout << org << " " << op1 << " " << op2 << " " << mnn << endl;
    }
  }
  cout << sum + mnn << endl;
  return 0;
}
