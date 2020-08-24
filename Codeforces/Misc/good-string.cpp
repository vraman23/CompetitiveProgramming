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
#define sz(a) int((a).size())


const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //
int t;
string s;


int solve(int x, int y){
  //xyxyxyxy
  int out = 0;
  F0R(i, sz(s)){
    if(s[i] == x + '0'){
      out++;
      swap(x, y);
    }
  }
  if(x != y && out % 2) out--; 
  return out;
}

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> t;
  while(t--){
    cin >> s;
    int ans = 0;
    F0R(i, 10) F0R(j, 10) ans = max(ans, solve(i, j));
    cout << sz(s) - ans << "\n";
  }



  return 0;
}
