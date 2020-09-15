// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/B
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
const int MX = 1e4; //
const ll INF = 1e18; //
ll n, k;
double a[MX];

bool f(double x){
  ll sum = 0;
  F0R(i, n) sum += floor(a[i]/x);
  return sum >= k;
}

void real_binary_search(){
  double l = 0; //f(l) = 1;
  double r = 1e8; // f(r) = 0;
  F0R(i, 100){
    double m = (l+r)/2;
    if(f(m)) l = m;
    else r = m;
  }
  cout << setprecision(20) << l << "\n";
}

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> k;
  F0R(i, n) cin >> a[i];
  real_binary_search();

  return 0;
}
