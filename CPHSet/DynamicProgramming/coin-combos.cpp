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
  int n, x;
  cin >> n >> x;
  vi coins(n);
  F0R(i, n) cin >> coins[i];

  vi dp(x+1, 0);
  dp[0] = 1;
  for(int i = 1; i <= x; i++){
    for(auto c : coins){
      if (i-c >= 0) (dp[i] += dp[i-c]) %= MOD;
    }
  }
  cout << dp[x] << "\n";

  return 0;
}
