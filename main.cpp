#include <bits/stdc++.h>
#include <numeric>
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



int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); // see Fast Input & Output
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    vi a(n);
    F0R(i, n) cin >> a[i];
    sort(a.rbegin(), a.rend());
    vi out;
    bool used[n];
    out.pb(a[0]);
    used[0] = true;
    int start = 0;
    while(start < n){
      int best = -1;
      int g = -1;
      for(int i = start + 1; i < n; i++){
        if(gcd(a[i], a[start]) > g) {
          g = gcd(a[i], a[start]);
          best = i;
        }
      }
      used[best] = true;
      out.pb(a[best]);
      start = best;
    }
    for(int i = 0; i < n; i++){
      if(!used[i]) out.pb(a[i]);
    }
    F0R(i, n) cout << out[i] <<" ";
    cout << "\n";
  }
}
