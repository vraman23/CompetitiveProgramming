#include <bits/stdc++.h>
#include <array>

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
const int MX = 2e5; //
const ll INF = 1e18; //
int n;

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  vpi x(n);
  int e;
  F0R(i, n) {
    cin >> e;
    x[i] = make_pair(x, i);
  }
  sort(x.begin(), x.end());
  for(int i = n-1; i >= 0; i--){
    
  }



  return 0;
}
