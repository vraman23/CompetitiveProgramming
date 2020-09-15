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
const int MX = 1e5; //
const ll INF = 1e18; //

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  int T; cin >> T;
  while(T--){
    int N, K, Z; cin >> N >> K >> Z;
    vector<int> A(N);
    F0R(i, N) cin >> A[i];
    int ans = 0;
    vector<vi> dp(N, vi(Z+1));
    dp[0][0] = A[0];
    F0R(i, N){
      F0R(z, Z+1){
        setmax(ans, dp[i][z]);
        if(i + 2*z >= K) continue;
        if(i < N-1) setmax(dp[i+1][z], dp[i][z] + A[i+1]);
        if (i >= 1 && z < Z) {
          setmax(ans, dp[i][z] + A[i-1]);
          if(i + 2*z + 2 <= K) setmax(dp[i][z+1], dp[i][z] + A[i-1] + A[i]);
        }
      }
    }
    cout << ans << "\n";
  }
  return 0;
}
