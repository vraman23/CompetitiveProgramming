#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;

#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)
#define f first
#define s second
#define ar array

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //


const int mxN = 2e5;
int n, ans[mxN];

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  int a, b;
  cin >> n;
  vector<pair<int, pi> > times;
  vi ans(n);

  F0R(i, n) {
    cin >> a >> b;
    times.push_back(make_pair(a, make_pair(0, i)));
    times.push_back(make_pair(b, make_pair(1, i)));
  }
  sort(times.begin(), times.end());

  vi rooms;
  int capacity = 0, maxCount = 0;
  for(auto el : times){
    pi node = el.s;
    if (node.f) rooms.push_back(ans[node.s]);
    else if (capacity == rooms.size()) ans[node.s] = ++maxCount;
    else ans[node.s] = rooms[capacity++];
  }
  cout << maxCount << "\n";
  F0R(i, n) cout << ans[i] << " ";

  // vpi times(2 * n);
  // vpi timePairs(n);
  // for(int i = 0; i < 2 * n; i+= 2){
  //   cin >> a >> b;
  //   times[i] = make_pair(a, 1);
  //   times[i+1] = make_pair(b+1, -1);
  //   timePairs[i/2] = make_pair(a, b);
  // }
  // sort(times.begin(), times.end());
  // maxCount = 0, count = 0;
  // F0R(i, 2 * n){
  //   count += times[i].s;
  //   maxCount = max(maxCount, count);
  //   // cout << count << "\n";
  // }
  // cout << maxCount << "\n";
  // for(int i = 0; i <= n-1; i++){
  //   cout << (i%maxCount) + 1 << " ";
  // }
  cout << "\n";
  return 0;
}
