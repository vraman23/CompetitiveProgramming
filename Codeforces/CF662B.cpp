#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;

#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  int n, a, q, v;
  string x;
  cin >> n;
  map<int, int> m;
  map<int, int> counts;
  F0R(i, n){
    cin >> a;
    m[a] += 1;
  }
  for(auto p : m){
    if (p.second >= 8) counts[8]++;
    else if (p.second >= 6) counts[6]++;
    else if (p.second >= 4) counts[4]++;
    else if (p.second >= 2) counts[2]++;
  }

  cin >> q;
  int count = n;
  while(q--){
    cin >> x >> v;
    if (x[0] == '+') {
      count++;
      m[v]++;
      if (m[v] == 2 || m[v] == 4 || m[v] == 6 || m[v] == 8) {
        counts[m[v]]++;
        counts[m[v]-2]--;
      }
    } else {
      count--;
      m[v]--;
      if (m[v] == 1 || m[v] == 3 || m[v] == 5 || m[v] == 7) {
        counts[m[v]+1]--;
        counts[m[v]-1]++;
      }

    }
    if (count < 8) cout << "NO" << "\n";
    else {
      // cout << counts[2] << " "<< counts[4] << " " << counts[6] << " " << counts[8] << "\n";
      if (counts[8] >= 1) cout << "YES" << "\n";
      else if(counts[6] >= 1 && counts[2] >= 1) cout << "YES" <<"\n";
      else if(counts[4] >= 2) cout << "YES" << "\n";
      else if(counts[4] >= 1 && counts[2] >= 2) cout << "YES" << "\n";
      else cout << "NO" << "\n";
    }
  }

  return 0;
}
