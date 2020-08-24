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
#define pb push_back
#define sz(a) int((a).size())


const int MOD = 1e9+7; // 998244353;
const int MX = 1e5; //
const ll INF = 1e18; //
int t, n, k, z, a[MX];

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> t;
  while(t--){
    cin >> n >> k >> z;
    F0R(i, n) cin >> a[i];
    vector<vi> score(k+1, vi(z+1, a[0]));
    for(int i = 1; i <= k; i++) score[i][0] = a[i] + score[i-1][0];
    for(int j = 1; j <= z; j++){
      for(int i = 1; i <= k; i++){
        score[i][j] = max(score[i][j-1], a[i-1] + score[i-1][j-1]);
      }
    }
    F0R(i, z+1) cout << score[k][i] << " ";
    cout << "\n";
    // cout << score[k][z] << "\n";

  }



  return 0;
}
