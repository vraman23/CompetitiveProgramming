//https://codeforces.com/problemset/problem/279/B
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<ll> vll;

#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  ll n, t, a;
  cin >> n >> t;
  vll sum(n+1, 0);
  sum[0] = 0;
  F0R(i, n){
    cin >> a;
    sum[i+1] = sum[i] + a;
  }
  int left = 0;
  int ans = 0;
  for(int right = 1; right <= n; right++){
    while(sum[right] - sum[left] > t) left++;
    ans = max(ans, right-left);
  }
  cout << ans << "\n";

  return 0;
}
