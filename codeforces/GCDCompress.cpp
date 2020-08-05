#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef double db;
typedef string str;

typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef pair<db,db> pd;

typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<db> vd;
typedef vector<str> vs;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<pd> vpd;

#define mp make_pair
#define f first
#define s second
#define sz(x) (int)x.size()
#define all(x) begin(x), end(x)
#define rall(x) (x).rbegin(), (x).rend()
#define ins insert
#define ft front()
#define bk back()
#define pf push_front
#define pb push_back
#define eb emplace_back
#define lb lower_bound
#define ub upper_bound

#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //
const ld PI = acos((ld)-1);

int t;

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> t;
  int n;
  F0R(z, t) {
    cin >> n;
    vi odds;
    vi evens;
    int x;
    F0R(j, 2*n) {
      cin >> x;
      if(x%2 ==0) evens.push_back(x);
      else odds.push_back(x);
    }

    F0R(k, n-1){
      int a, b;
      if(odds.size() >= 2) {
        a = odds.back();
        odds.pop_back();
        b = odds.back();
        odds.pop_back();
      } else {
        a = evens.back();
        evens.pop_back();
        b = evens.back();
        evens.pop_back();
      }
      cout << a << " " << b << "\n";
    }

  }
  return 0;
}
