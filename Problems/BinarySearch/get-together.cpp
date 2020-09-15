//https://codeforces.com/edu/course/2/lesson/6/3/practice/contest/285083/problem/A
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
const int MX = 1e5; //
const ll INF = 1e18; //
int n, x[MX], v[MX];

bool good(double t){
  double l = -1e18, r = 1e18;
  F0R(i, n) {
    l = max(l, x[i] - t * v[i]);
    r = min(r, x[i] + t * v[i]);
  }
  return l <= r;

}

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  F0R(i, n) cin >> x[i] >> v[i];

  double l = 0;
  double r = 1e10;
  F0R(i, 100){
    double m = (l+r)/2;
    if(good(m)) r = m;
    else l = m;
  }
  cout << setprecision(20) << r << "\n";
  return 0;
}
