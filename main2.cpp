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
const double M = 1e9+7;
const int MX = 2e5+5; //
const ll INF = 1e18; //


int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); // see Fast Input & Output
  int n, m; cin >> n >> m;
  int sx, sy, fx, fy; cin >> sx >> sy >> fx >> fy;
  vi x(m);
  vi y(m);
  F0R(i, m){
    cin >> x[i] >> y[i];
  }
  int nearS = MOD;
  int nearF = MOD;
  int pS = -1;
  int pF = -1;
  F0R(i, m){
    if (min(abs(x[i] - sx), abs(y[i] - sy)) <= nearS){
      nearS = min(abs(x[i] - sx), abs(y[i] - sy));
      pS = i;
    }
    if (abs(x[i] - fx) + abs(y[i] - fy) <= nearF){
      nearF = abs(x[i] - fx) +  abs(y[i] - fy);
      pF = i;
    }
  }
  cout << "\n\n";
  cout << pS << " "<<pF << "\n";
  int dist = nearS + nearF;
  // cout << dist << "\n";
  cout << min(abs(fx - sx) + abs(fy - sy), dist) << "\n";



}
