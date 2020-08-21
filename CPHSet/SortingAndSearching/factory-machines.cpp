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

const ll mxN = 2e5;
ll n, t;
ll times[mxN];

ll numProd(ll x){
  ll out = 0;
  F0R(i, n) out += x/times[i];
  return out;
}

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> t;
  F0R(i, n) cin >> times[i];
  // for(int i = 1; i <= 10; i++) cout << numProd(i) << " ";
  cout << "\n";
  ll end = 1;
  while(numProd(end) < t) end *= 2;
    // cout << end << "\n";

  ll start = end/2;
  // cout << start << " " << end << "\n";
  ll ans = start;
  while(start <= end){
    ll mid = start + (end - start)/2;
    // cout << mid << " " << numProd(mid) << "\n";
    if(numProd(mid) >= t) {
      ans = mid;
      end = mid-1;
    } else {
      start = mid + 1;
    }
  }
  cout << ans << "\n";

  return 0;
}
