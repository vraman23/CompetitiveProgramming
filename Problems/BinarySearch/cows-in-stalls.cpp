#include <bits/stdc++.h>

using namespace std;


typedef long long ll;
typedef pair<int,int> pi;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pi> vpi;

template <typename T> void setmax(T& a, const T& b) { if (b > a) a = b; }

#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)
#define f first
#define s second
#define pb push_back
#define sz(a) int((a).size())


const int MOD = 1e9+7; // 998244353;
const int MX = 1e4; //
const ll INF = 1e18; //
int n, k, x[MX];

bool good(int m){
  int index = 1;
  int count = 1;
  int prev = 0;
  while(index < n && count < k){
    if (x[index] - x[prev] >= m) {
      count++;
      prev = index;
    }
    index++;
  }
  return (count == k);
}

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); // see Fast Input & Output
  cin >> n >> k;
  F0R(i, n) cin >> x[i];

  int l = 0;
  int r = 1e9;
  while(r > l+1){
    int mid = l + (r-l)/2;
    if(good(mid)) l = mid;
    else r = mid;
  }
  cout << l << "\n";


}
