#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef vector<pll> vpl;

#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)
#define f first
#define s second
#define pb push_back

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //
ll n, x;

bool twoSum(int index, vpl a){
  int left = index + 1;
  int right = n-1;
  while(left < right){
    ll val = a[left].f + a[right].f + a[index].f;
    // cout << val << "\n";
    if (val == x) {
      cout << a[index].s << " " << a[left].s  << " " << a[right].s << "\n";
      return 1;
    } else if (val < x) left++;
    else right--;
  }
  return 0;
}

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> x;
  vpl a(n);
  ll b;
  F0R(i, n){
    cin >> b;
    a[i] = make_pair(b, i+1);
  }
  sort(a.begin(), a.end());
  for(ll i = 0; i < n-2; i++){
    if(twoSum(i, a)) return 0;
  }
  cout << "IMPOSSIBLE" <<"\n";
  return 0;
}
