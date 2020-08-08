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
  int n, target;
  cin >> n >> target;
  vi coins(n);
  F0R(i, n) cin >> coins[i];
  int ways[target+1][n+1] = {0};


  ways[0][0] = 1;
  for(int i = 0; i <= target; i++){
    for(int j = 1; j <= n; j++){
      ways[i][j] = ways[i][j-1];
      if(i - coins[j-1] >= 0) (ways[i][j] += ways[i-coins[j-1]][j]) %= MOD;
    }
  }
  cout << ways[target][n] << "\n";

  return 0;
}
