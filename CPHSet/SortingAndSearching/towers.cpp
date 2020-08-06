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
  int n, k;
  cin >> n;
  vi towers;
  while(n--){
    cin >> k;
    auto it = upper_bound(towers.begin(), towers.end(), k);
    if (it == towers.end()) towers.push_back(k);
    else *it = k;
  }
  cout << towers.size() << "\n";
  return 0;
}
