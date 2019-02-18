#include <bits/stdc++.h>
using namespace std;

const int mx = (1 << 20) + 3;
const int mxa = (int)3e5 + 3;

int n;
int a[mxa];
int cnt[2][mx];

int main() {
  std::ios_base::sync_with_stdio(false);
  cin >> n;
  int x = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cnt[1][0] = 1;
  int64_t ans = 0;
  for(int i = 0; i < n; i++) {
    x ^= a[i];
    ans += cnt[i % 2][x];
    cnt[i % 2][x]++;
  }
  cout << ans << endl;
  return 0;
}
