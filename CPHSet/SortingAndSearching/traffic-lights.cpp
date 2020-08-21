#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;

#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)
#define f first
#define s second
#define pb push_back

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //

const int mxN = 2e5;
int x, n, lights[mxN];

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  int light;
  cin >> x >> n;
  set<int> s = {0, x};
  multiset<int> lengths = {x};
  F0R(i, n){
    cin >> light;
    auto it = s.upper_bound(light);
    int left = *prev(it);
    int right = *it;
    lengths.erase(lengths.find(right - left));
    lengths.insert(right - light);
    lengths.insert(light - left);
    s.insert(it, light);
    cout << *(lengths.rbegin()) <<" ";
  }
  cout << "\n";




  // int x, n, l, best, sum;
  // cin >> x >> n;
  // vi p;
  // p.push_back(0);
  // p.push_back(x);
  // F0R(i, n){
  //   best = 0;
  //   cin >> l;
  //   auto it = lower_bound(p.begin(), p.end(), l);
  //   p.insert(it, l);
  //   F0R(i, p.size()-1){
  //     sum = p[i+1] - p[i];
  //     best = max(best, sum);
  //   }
  //   cout << best << " ";
  // }

  return 0;
}
