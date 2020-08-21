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
ll n;

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  vector<pair<pll, ll> > p(n);
  ll a, b, c;
  F0R(i, n){
    cin >> a >> b >> c;
    p[i] = make_pair(make_pair(b, a), c);
  }
  sort(p.begin(), p.end());
  set<pll> dp;
  dp.insert(make_pair(0, 0));
  ll best = 0;
  F0R(i, n){
    pll time = p[i].f;
    auto it = dp.lower_bound(make_pair(time.s, 0));
    --it;
    best = max(best, (*it).s + p[i].s);
    dp.insert(make_pair(time.f, best));
  }
  cout << best << "\n";


  return 0;
}
