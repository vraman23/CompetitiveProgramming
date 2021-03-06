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
  for (int&v : coins) cin >> v;
  vector<vector<int>> ways (n+1, vector<int>(target+1, 0));
  ways[0][0] = 1;
  for(int i = 1; i <= n; i++){
    for(int j = 0; j <= target; j++){
      ways[i][j] = ways[i-1][j];
      if(j - coins[i-1] >= 0) (ways[i][j] += ways[i][j-coins[i-1]]) %= MOD;
    }
  }
  cout << ways[n][target] << "\n";


  return 0;
}
