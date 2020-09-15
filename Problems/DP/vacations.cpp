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

int max3(int a, int b, int c){
  return max(a, max(b, c));
}

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); // see Fast Input & Output
  int n;
  cin >> n;
  int a[n]; //0:FF, 1: FT, 2: TF, 3 : TT ; GC
  F0R(i, n) cin >> a[i];
//0:rest, 1: sport, 2: contest
  vector<vi> dp(n, vi(3, 0));


  for(int i = 0; i < n; i++){
      if(i-1 >= 0) {
        dp[i][0] = max3(dp[i-1][0], dp[i-1][1], dp[i-1][2]);
        if(a[i] == 2 || a[i] == 3) {
          dp[i][1] = 1 + max(dp[i-1][0], dp[i-1][2]);
        }
        if(a[i] == 1 || a[i] == 3) {
          dp[i][2] = 1 + max(dp[i-1][0], dp[i-1][1]);
        }
    } else {
      dp[i][0] = 0;
      if(a[i] == 2 || a[i] == 3) dp[i][1] = 1;
      if(a[i] == 1 || a[i] == 3) dp[i][2] = 1;
    }
  }
  cout << n - max3(dp[n-1][0], dp[n-1][1], dp[n-1][2]) << "\n";


}
