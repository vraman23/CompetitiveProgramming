//https://codeforces.com/problemset/problem/492/B
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
const int MX = 1e3; //
const ll INF = 1e18; //
int n, l;


int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> l;
  vector<double> a(n, 0);
  F0R(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  double diff = 0;
  F0R(i, n-1) diff = max(diff, a[i+1] - a[i]);
  diff = max(diff/2, max(a[0], l-a[n-1]));
  cout << setprecision(20) << diff << "\n";



  return 0;
}
