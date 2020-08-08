#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;

#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  vi count(n+1, 0);

  count[0] = 1;
  for(int x = 1; x <= n; x++){
    for(int val = 1; val <= 6; val++){
      if(x-val >= 0) count[x] += count[x-val];
      count[x] %= MOD;
    }
  }
  cout << count[n] << "\n";

  return 0;
}
