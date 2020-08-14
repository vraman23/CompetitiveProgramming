#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;


#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  int t, n;
  string str;
  cin >> t;
  while(t--){
    cin >> n;
    cin >> str;
    vector<ll> pref(n+1, 0);
    F0R(i, n) pref[i+1] = pref[i] + (int)(str[i] - '0');
    map<ll,ll> mp;
    ll ans = 0;
    for(ll i = 0; i <= n; i++) mp[pref[i] - i]++;
    for(auto x : mp) {
      ans += x.second * (x.second-1) / 2;
    }
    cout << ans << "\n";
  }
  return 0;
}
