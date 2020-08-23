//https://codeforces.com/problemset/problem/1394/A
#include <bits/stdc++.h>

using namespace std;


typedef long long ll;
typedef pair<int,int> pi;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pi> vpi;


#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)
#define f first
#define s second
#define pb push_back

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //
int n, d, m;

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> d >> m;
  int z;
  vi a, b;
  F0R(i, n) {
    cin >> z;
    if (z > m) b.push_back(z);
    else a.push_back(z);
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  int ans = 0;
  int x = 0, y = 0;
  while(x < a.size() && y < b.size()){
    int sum = 0;
    int index = min(a.size()-1, x+d);
    for(int i = x; i < index, i++){
      sum+= a[i];
    }
    if (b[y] > sum){
      ans += b[y];
      y++;
      x = min(x+d, a.size());
    }
  }
  while(x < a.size()) {
    ans += a[x];
    x++;
  }
  while(y < b.size()){
    for(int z = b.size()-1; z >= y; z -= d) ans += b[z];
  }
  cout << ans << "\n";





  return 0;
}
