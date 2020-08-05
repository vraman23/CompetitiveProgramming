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

// pair<bool, int> gamesPlayed[1000000001];


//player is 0 or 1
int game(int n, int player) {
    // if(gamesPlayed[n].first) {
    //   if (player == 0) return gamesPlayed[n].second;
    //   else return 1 - gamesPlayed[n].second;
    // }
    // gamesPlayed[n].first = true;
    if(n == 1) {
      // gamesPlayed[n].second = 1;
      return 1-player;
    }
    if(n % 2 == 1 ) {
      // gamesPlayed[n].second = 0;
      return player;
    }

    if(game(n-1, 1-player) == player) {
      // gamesPlayed[n].second = 0;
      return player;
    }
    for(int i = 3; i * i <= n; i+= 2) {
      if(n % i == 0 && game(n/i, 1-player) == player) {
        // gamesPlayed[n].second = 0;
        return player;
      }
    }
    // gamesPlayed[n].second = 1;
    return 1-player;
}

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  int n;

  F0R(i, t){
    //0 is ashish, 1 is fastest
    cin >> n;
    string result = (game(n, 0) == 0) ? "Ashishgup" : "FastestFinger";
    cout << result << "\n";
  }

  return 0;
}
