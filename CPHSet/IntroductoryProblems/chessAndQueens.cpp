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

int c;
bool valid[8][8];
bool col[8];
bool diag1[15];
bool diag2[15];

void search(int y) {
  if (y == 8) {
    c++;
    return;
  }
  for (int x = 0; x < 8; x++) {
      if(!valid[x][y]) continue;
      if(col[x] || diag1[x+y] || diag2[x-y+7]) continue;
      col[x] = diag1[x+y] = diag2[x-y+7] = true;
      search(y+1);
      col[x] = diag1[x+y] = diag2[x-y+7] = false;
  }
}

int main() {
    ios:: sync_with_stdio(0);
    cin.tie(0);
    c = 0;
    F0R(i, 8) {
        F0R(j, 8) {
            char x;
            cin >> x;
            valid[i][j] = (x == '.');

        }

    }
    search(0);
    cout << c << "\n";

  return 0;
}
