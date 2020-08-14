//https://codeforces.com/problemset/problem/1348/B
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
  int t, n, k, a;
  cin >> t;
  // cout << "\n\n\n";
  while(t--){
    cin >> n >> k;
    set<int> distinct;
    vi list(k, 1);
    F0R(i, n){
      cin >> a;
      if (!distinct.count(a)){
        if(distinct.size() < k){
          list[distinct.size()] = a;
        }
        distinct.insert(a);
      }
    }
    if (distinct.size() > k) cout << -1 << "\n";
    else {
      cout << k * n << "\n"; 
      for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
          cout << list[j] << " ";
        }
      }
      cout << "\n";
    }

  }

  return 0;
}
