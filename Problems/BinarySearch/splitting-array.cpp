//https://codeforces.com/edu/course/2/lesson/6/3/practice/contest/285083/problem/B
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
int n, k, a[MX], sum[MX+1];

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> k;
  int l;
  
  F0R(i, n){
    cin >> a[i];
    sum[i+1] = sum[i] + a[i];
    l = max(l, a[i]);
  }
  int r = sum[n];
  while(r > l + 1){
    int m = l + (r-l)/2;
    if(good(m))
  }




  return 0;
}
