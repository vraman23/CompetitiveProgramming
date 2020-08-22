// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/E
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
double c;

bool f(double x){
  return x * x + sqrt(x) >= c;
}

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  double l, r, m;
  cin >> c;
  l = 0;
  r = 1e10;
  F0R(i, 100){
    m = (l + r)/2;
    if(f(m)) r = m;
    else l = m;
  }
  cout << setprecision(20) <<r << "\n";


  return 0;
}
