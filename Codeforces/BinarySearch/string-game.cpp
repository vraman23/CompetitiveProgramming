//https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/F
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
const int MX = 2e5; //
const ll INF = 1e18; //
string p, t;
int a[MX];

bool good(int x){
  string s = t;
  F0R(i, x) s[a[i]-1] = 0;
  int count = 0;
  for(int i = 0; i < s.length(); i++){
    if(!s[i]) continue;
    if(s[i] == p[count]) count++;
    if(count == p.length()) return true;
  } return false;
}

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> t >> p;
  F0R(i, t.length()) cin >> a[i];
  // FOR(i, 1, t.length()+1) cout << good(i) << "\n"; 
  int l = 0;
  int r = t.length();
  while(r > l + 1){
    int m = l + (r-l)/2;
    if(good(m)) l = m;
    else r = m;
  }
  cout << l << "\n";



  return 0;
}
