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
  int n, m, x;
  cin >> n >> m >> x;
  vector<vi> dp(n, vi(m+1, 0));
  //base case
  // cout << x << "\n";
  if (x == 0) fill(dp[0].begin(), dp[0].end(), 1);
  dp[0][x] = 1;
  // cout << dp[0][x] <<"\n";
  // for(int i = 0; i < n; i++){
  //   for(int j = 0; j <= m; j++) cout << dp[i][j];
  //   cout << "\n";
  // }
  for(int i = 1; i < n; i++){
    cin >> x;
    if (x == 0){
      for(int j = 1; j <= m; j++){
        if(j-1 > 0) (dp[i][j] += dp[i-1][j-1]) %= MOD;
        (dp[i][j] += dp[i-1][j]) %= MOD;
        if(j+1 <= m) (dp[i][j] += dp[i-1][j+1]) %= MOD;
      }
    } else {
      if(x-1 > 0) (dp[i][x] += dp[i-1][x-1]) %= MOD;
      (dp[i][x] += dp[i-1][x]) %= MOD;
      if(x+1 <= m) (dp[i][x] += dp[i-1][x+1]) %= MOD;
    }
  }

  // for(int i = 0; i < n; i++){
  //   for(int j = 0; j <= m; j++) cout << dp[i][j];
  //   cout << "\n";
  // }

  int ans = 0;
  for(int i = 1; i <= m; i++) (ans += dp[n-1][i]) %= MOD;
  cout << ans << "\n";

  return 0;
}
