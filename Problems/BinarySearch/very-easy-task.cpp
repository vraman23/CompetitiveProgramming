//https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/C
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
int n, x, y;

bool good(int t){
  int k = min(x, y);
  return (t >= k) + (t-k)/x + (t-k)/y >= n;
}

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> x >> y;
  int l = 1; // !good(l)
  int r = 1; // good(r)
  while(!good(r)) r*= 2;
  while(r > l+1){
    int m = l + (r-l)/2;
    if(good(m)) r = m;
    else l = m;
  }
  cout << r << "\n";




  return 0;
}
