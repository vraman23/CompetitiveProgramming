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

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); // see Fast Input & Output
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    vll a(n);
    F0R(i, n) {
      cin >> a[i];
    }
    ll sum = a[n-1] + a[0] + a[1];
    sum = max(sum, a[n-2] + a[n-1] + a[0]);
    for(int i = 2; i < n; i++){
      sum = max(sum, a[i] + a[i-1] + a[i-2]);
    }
    cout << sum << "\n";
  }


}