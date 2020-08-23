//https://codeforces.com/problemset/problem/1399/D
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
int t, n;
string s;

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> t;
  while(t--){
    cin >> n >> s;
    queue<int> zero, one;
    vi ans(n, 0);
    int piles = 0;
    F0R(i, n){
      if (s[i] == '0'){
        if(zero.empty()){
          piles++;
          ans[i] = piles;
          one.push(piles);
        } else {
          int p = zero.front(); zero.pop();
          ans[i] = p;
          one.push(p);
        }
      } else {
        if(one.empty()){
          piles++;
          ans[i] = piles;
          zero.push(piles);
        } else {
          int p = one.front(); one.pop();
          ans[i] = p;
          zero.push(p);
        }
      }
    }
    cout << piles << "\n";
    F0R(i, n) cout << ans[i] << " ";
    cout << "\n";
  }



  return 0;
}
