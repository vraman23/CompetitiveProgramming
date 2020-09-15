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
string S;
ll N[3], P[3], R, counts[3];

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //

bool good(ll x){
  ll cost = 0;
  F0R(i, 3) cost += max(counts[i] * x - N[i], 0LL) * P[i];
  return cost <= R;
}

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> S;
  for(auto c : S){
    if(c == 'B') counts[0]++;
    else if(c == 'S') counts[1]++;
    else counts[2]++;
  }
  F0R(i, 3) cin >> N[i];
  F0R(i, 3) cin >> P[i];

  cin >> R;
  ll l = 0;
  ll r = 1;
  while(good(r)) r *= 2;
  while(r > l+1) {
    ll m = l + (r-l)/2;
    if(good(m)) l = m;
    else r = m;
  }
  cout << l << "\n";





  return 0;
}
