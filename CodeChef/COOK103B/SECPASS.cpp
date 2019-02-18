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
      string s; cin >> s;
      vector<int> v;
      for(int i = 0; i < n; i++) {
        if(s[i] == s[0]) {
          v.push_back(i);
        }
      }
      if(v.size() == 1) {
        cout << s << endl;
        continue;
      }
      int sz = v[1] - v[0];
      int i = 0, fl = 0;
      string ans = "";
      while(i < sz) {
        for(int j : v) {
          if(j + i >= n || s[j + i] != s[i]) {
            ans = s.substr(0, i);
            fl = 1;
            break;
          }
        }
        if(fl) break;
        else ans = s.substr(0, i + 1);
        i++;
      }
      cout << ans << endl;
    }
    return 0;
}