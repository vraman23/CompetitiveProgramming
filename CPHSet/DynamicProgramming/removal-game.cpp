#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pi> vpi;


#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)
#define f first
#define s second

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //

int n;
vector<ll> x(5000);
pi dp[5000][5000];

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  F0R(i, n) cin >> x[i];
  for(int l = n-1; l >= 0; l--){
    for(int r = l + 1; r < n; r++){
      pi tr;
      if(l == r) tr = make_pair(x[i], 0);
      else {

      }

      diff[l][r] = max(x[l] - diff[l+1][r], x[r] - diff[l][r-1]);

    }
  }

  cout << dp[0][n-1][0] <<"\n";

}
