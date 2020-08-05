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

ll n, sum;
vector<ll> subset;
ll apples[20];
ll mn = INF;


void search(int k) {
  if (k == n) {
    ll setSum = 0;
    F0R(i, sz(subset)) {
      setSum += apples[subset[i]];
    }
    mn = min(mn, abs(setSum - (sum - setSum)));
  } else {
    subset.pb(k);
    search(k+1);
    subset.pop_back();
    search(k+1);
  }
}

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n;

  F0R(i, n) {
    cin >> apples[i];
    sum += apples[i];
  }

  search(0);
  cout << mn <<"\n";

  return 0;
}
