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
  vi prices(n);
  vi pages(n);
  for(int &v : prices) cin >> v;
  for(int &v : pages) cin >> v;

  vector<vi> dp(n+1, vi(x+1, 0));
  for(int i = 1; i <= n; i++){
    for(int j = 0; j <= x; j++){
      dp[i][j] = dp[i-1][j];
      if (j - prices[i-1] >= 0) dp[i][j] = max(dp[i][j], pages[i-1] + dp[i-1][j-prices[i-1]]);
    }
  }

  cout << dp[n][x] <<"\n";



  return 0;
}
