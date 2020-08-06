#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;

#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  int n, x, y, counter = 0, maxCount = 0;
  vector<pair<int, bool>> times;
  cin >> n;
  while(n--){
    cin >> x >> y;
    times.push_back(make_pair(x, true));
    times.push_back(make_pair(y, false));
  }
  sort(times.begin(), times.end());
  F0R(i, times.size()){
    counter += times[i].second ? 1 : -1;
    maxCount = max(counter, maxCount);
  }
  cout << maxCount << "\n";
  return 0;
}
