#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll,ll> pi;
typedef vector<int> vi;

#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  ll n, x;
  cin >> n >> x;
  pi a [n];
  F0R(i, n) {
    cin >> a[i].first;
    a[i].second = i+1;
  }
  sort(a, a+n);

  int start = 0;
  int end = n-1;
  while(start < end){
    ll val = a[start].first + a[end].first;
    if (val == x) {
      cout << a[start].second  << " " << a[end].second << "\n";
      return 0;
    } else if (val < x) start++;
    else end--;
  }
  cout << "IMPOSSIBLE" << "\n";

  return 0;
}
