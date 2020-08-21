#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pi> vpi;


#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)

const ll MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //
ll n;

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n;

  if ((n * (n+1)) % 4) {
    // cout << n << "\n";
    cout << 0 << "\n";
  } else {
    ll target = n * (n+1) / 4;
    vector<vll> count(n+1, vll(target + 1, 0));
    count[0][0] = 1;
    for(int i = 1; i <= n; i++){
      for(int j = 0; j <= target; j++){
        count[i][j] = count[i-1][j];
        if(j - i >= 0) (count[i][j] += count[i-1][j-i]) %= MOD;
      }
    }

    // for(int i = 0; i <= n; i++){
    //   for(int j = 0; j <= target; j++) cout << count[i][j] << " ";
    //   cout << "\n";
    // }
    // cout << count[n-1][target] << "\n";
    if (count[n][target] % 2 == 0) cout << count[n][target]/2 << "\n";
    else cout << ((count[n][target] + MOD)/2) % MOD << "\n";
  }



  return 0;
}
