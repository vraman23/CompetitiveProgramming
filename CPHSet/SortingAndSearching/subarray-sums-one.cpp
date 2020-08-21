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
const ll mxN = 2e5;
ll n, x, a[mxN], sum[mxN + 1];

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> x;
  sum[0] = 0;
  F0R(i, n) {
    cin >> a[i];
    sum[i+1] = sum[i] + a[i];
  }
  int ans = 0;
  int one = 0;
  int two = 1;
  while(one <= n){
    if (sum[two] - sum[one] == x) {
      ans++;
      two++;
    } else if (sum[two] - sum[one] < x) {
      two++;
    } else {
      one++;
    }
  }
  cout << ans << "\n";
  return 0;
}
