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
const int MX = 2e5+5; //
const ll INF = 1e18; //
int n, m, d;
vpi adj[n+1];

pair<int, vi> good(int x){
  //path with length less than d with no edge greater than x
  

}

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); // see Fast Input & Output
  cin >> n >> m >> d;
  int maxC = 0;
  F0R(i, m){
    int a, b, c;
    cin >> a >> b >> c;
    adj[a].push_back(make_pair(b, c));
    maxC = max(maxC, c);
  }
  if(!good(maxC).f) cout << -1 << "\n";
  else {
    int l = 0;
    int r = maxC;
    int ans = good(maxC);
    while(r.f > l.f+1){
      int mid = l + (r-l)/2;
      pair<int, vi> mP = good(mid);
      if(mP.f) {
        r = mid;
        ans = mP;
      }
      else l = mid;
    }
    cout << r << "\n";
    for(int i = 0; i < sz(ans); i++){
      cout << ans[i] << " ";
    } cout << "\n";
  }


}
