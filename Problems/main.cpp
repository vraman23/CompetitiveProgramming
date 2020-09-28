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


void solve(set<int> &s){
  vector<int> v(s.begin(), s.end());
  for(int i = 0; i < sz(v); i++){

  }
}

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); // see Fast Input & Output
  int n, q; cin >> n >> q;
  set<int> p;
  F0R(i, n){
    int x; cin >> x;
    p.insert(x);
  }
  solve(p);
  F0R(i, q) {
    int a, b; cin >> a >> b;
    if(a) p.insert(b);
    else p.erase(b);
    solve(p);
  }

}
