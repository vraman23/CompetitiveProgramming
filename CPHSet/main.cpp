#include <bits/stdc++.h>

using namespace std;


typedef long long ll;
typedef pair<int,int> pi;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pi> vpi;

template <typename T> void setmax(T& a, const T& b) { if (b > a) a = b; }

#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)
#define f first
#define s second
#define pb push_back
#define sz(a) int((a).size())


const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //
int dp[201][201][201];

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); // see Fast Input & Output
  int n, k; cin >> n >> k;
  string s, t; cin >> s >> t;
  dp[0][0][0] = 0;
  for(int i = 1; i <= n; i++){
    for(int c = 0; c <= k; c++){
      for(int j = 0; j< n; j++){
        int e0 = s[i-1] == t[0];
        int e1 = s[i-1] == t[1];
        int e01 = t[0] == t[1];
        //no change
        dp[i][c][j + e0] = max(dp[i][c][j+e0], dp[i][c][j] + (e1)?j : 0);
        if(c < k){
          dp[i][c+1][j+e1] = max(dp[i][c+1][j+e1], dp[i][c][j] + (e01)?j:0);
          dp[i][c+1][j+e01] = max(dp[i][c+1][j+e01], dp[i][c][j] + j);
        }
      }
    }
  }
  int best = 0;
  for(int i = 0; i <= n; i++){
    for(int j = 0; j <= k; k++){
      best = max(best, dp[n][j][i]);
    }
  }
  cout << best << "\n";
}
