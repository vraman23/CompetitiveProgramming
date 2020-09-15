
//https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C
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
const int MX = 1e5; //
const ll INF = 1e18; //
int n, k, a[MX];

int upper_bound(int x){
  int l = -1; // a[l] < x
  int r = n; // a[r] >= x
  while(r > l+1){
    int m = l + (r-l)/2;
    if(a[m] < x) l = m;
    else r = m;
  }
  return r; //
}

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> k;
  F0R(i, n) cin >> a[i];
  int x;
  F0R(i, k){
    cin >> x;
    cout << upper_bound(x) + 1 << "\n";
  }



  return 0;
}
