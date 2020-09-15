//https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/G
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

const int MOD = 1e9+7; // 998244353;
const int MX = 50; //
const ll INF = 1e18; //
ll k, n, a[MX];

bool good(ll x){
  ll slots = x * k;
  F0R(i, n) slots -= min(x, a[i]);
  return slots <= 0;
}

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> k >> n;
  F0R(i, n) cin >> a[i];
  ll l = 0;
  ll r = 1;
  while(good(r)) r *= 2;
  while(r > l+1){
    ll m = l + (r-l)/2;
    if(good(m)) l = m;
    else r = m;
  }
  cout << l << "\n";






  return 0;
}
