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
  vi coins (n), dp(x+1, 1e9);
  F0R(i, n) cin >> coins[i];

cin >> n >> x;
  dp[0]=0;
  for(int i = 1; i <= x; i++){
    for(auto c : coins){
      if (i - c >= 0) dp[i] = min(dp[i], 1 + dp[i-c]);
    }
  }
  cout << (dp[x] == 1e9 ? -1 : dp[x]) << "\n";
  return 0;
}
