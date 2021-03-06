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
  int x, t;
  int n, m;
  cin >> n >> m;
  multiset<int, greater<int>> h;

  while(n--){
    cin >> x;
    h.insert(x);
  }
  while(m--){
    cin >> t;
    auto pos = h.lower_bound(t);
    if (pos == h.end()) cout << "-1" << "\n";
    else {
      cout << *pos << "\n";
      h.erase(pos);
    }
  }
  return 0;
}
