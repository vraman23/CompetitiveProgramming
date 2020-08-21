#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pi> vpi;


#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const int INF = 1e9; //

const int mxN = 2e5;
int n;


int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  // vi length(n, 1);
  // for(int i = 1; i < n; i++){
  //   for(int j = 0; j < i; j++){
  //     if(x[j] < x[i]) length[i] =  max(length[i], length[j] + 1);
  //   }
  // }
  // int best = 0;
  // for(int i = 0; i < n; i++) best = max(best, length[i]);
  // cout << best << "\n";
  ////O(n^2)

  vi d(n+1, INF);
  d[0] = -INF;
  int x;

  for(int i = 0; i < n; i++){
    cin >> x;
    auto it = lower_bound(d.begin(), d.end(), x);
    *it = x;
  }

  int ans = 0;
  for(int i = 0; i <= n; i++){
    if(d[i] < INF) ans = i;
  }
  cout << ans << "\n";
  return 0;
}
