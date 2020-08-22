//https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/A
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

ll w, h, n;

bool f(ll x){
  return (x/w) * (x/h) >= n;
}

ll upper_bound(){
  //finding l and r
  ll l = 1;
  while(!f(l)) l *= 2;
  ll r = l;
  l /= 2;
  while(r > l+1){
    ll m = l + (r-l)/2;
    if(f(m)) r = m;
    else l = m;
  }
  return r; //
}

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> w >> h >> n;
  cout << upper_bound() << "\n";




  return 0;
}
