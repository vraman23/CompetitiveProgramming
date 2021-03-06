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
ll n;
int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  ll sum = 0;
  ll x = 0, m = 0;
  F0R(i, n) {
    cin >> x;
    m = max(x, m);
    sum += x;
  }
  ll out = (m > (sum - m)) ? 2 * m : sum;
  cout << out << "\n";
  return 0;
}
