//https://codeforces.com/problemset/problem/1395/C
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
const int MX = 200; //
const ll INF = 1e18; //
int n, m, a[MX], b[MX];

bool check(int x){
  bool flag = false;
  F0R(i, n){
    flag = false;
    F0R(j, m){
      // cout << x << " " << ((a[i]&b[j])|x) << "\n";
      if (((a[i]&b[j])|x) == x) {
        flag = true;
        break;
      }
    }
    if(!flag) return false;
  }
  return true;
}

bool Check(int x){
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j)if(((a[i]&b[j])|x)==x)goto Next;
		return 0;
		Next:;
	}
	return 1;
}

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  F0R(i, n) cin >> a[i];
  F0R(i, m) cin >> b[i];
  for(int i = 0; i < 1024; i++){
    if(check(i)) {
      cout << i << "\n";
      return 0;
    }
  }




  return 0;
}
