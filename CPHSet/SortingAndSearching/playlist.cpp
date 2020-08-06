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
  ll n, k, count, best;
  cin >> n;
  set<ll> s;
  count = 0;
  best = 0;
  F0R(i, n) {
    cin >> k;
    auto it = s.find(k);
    if (it == s.end()){
      count++;
      s.insert(k);
    } else {
      s.clear();
      best = max(best, count);
      s.insert(k);
      count = 1;
    }
  }
  cout << best << "\n";
  return 0;
}
