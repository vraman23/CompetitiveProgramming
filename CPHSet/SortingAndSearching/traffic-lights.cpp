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
  int x, n, l, best, sum;
  cin >> x >> n;
  vi p;
  p.push_back(0);
  p.push_back(x);
  F0R(i, n){
    best = 0;
    cin >> l;
    auto it = lower_bound(p.begin(), p.end(), l);
    p.insert(it, l);
    F0R(i, p.size()-1){
      sum = p[i+1] - p[i];
      best = max(best, sum);
    }
    cout << best << " ";
  }

  return 0;
}
