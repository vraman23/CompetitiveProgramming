//https://codeforces.com/problemset/problem/466/A
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
const int MX = 2e5+5; //
const ll INF = 1e18; //


int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  ll n, m, a, b;
  cin >> n >> m >> a >> b;
  if (a * m <= b) cout << n * a << "\n";
  else cout << (n/m) * b + min((n % m) * a, b) << "\n";



  return 0;
}
