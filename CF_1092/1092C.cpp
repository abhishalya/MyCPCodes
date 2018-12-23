#include <bits/stdc++.h>
using namespace std;

// Incomplete, not accepted!

int main() {
  int n; cin >> n;
  vector<pair<int, pair<string, int> > > v;
  vector<pair<int, char> > ans;
  map<string, char> m;
  for(int i = 0; i < 2 * n - 2; i++) {
    string s; cin >> s;
    v.push_back(make_pair(s.length(), make_pair(s, i)));
  }
  sort(v.begin(), v.end());
  ans.push_back(make_pair(v[0].second.second, 'P'));
  ans.push_back(make_pair(v[1].second.second, 'S'));
  m[v[0].second.first] = 'P'; m[v[1].second.first] = 'S';
  for(int i = 2; i < 2 * n - 2; i += 2) {
    if(v[i].second.first.substr(0, i) == v[i - 2].second.first) {
      ans.push_back(make_pair(v[i].second.second, m[v[i - 2]]));
      ans.push_back(v[i + 1].second.second, (m[v[i - 2].second.first] == 'S') ? 'P' : 'S');
      m[v[i].second.first] = ; m[v[1].second.first] = 'S';
    }
    else {
      ans.push_back(make_pair(v[i].second.second, m[v[i - 1]]));
      ans.push_back(make_pair(v[i + 1].second.second, (m[v[i - 1].second.first] == 'S') ? 'P' : 'S'));
    }
  }
  sort(ans.begin(), ans.end());
  for(int i = 0; i < ans.size(); i++) cout << ans[i].second;
  cout << endl;
  return 0;
}
