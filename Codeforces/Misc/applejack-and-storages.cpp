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
int n, q;

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  int sum2 = 0, sum4 = 0;
  map<int, int> m;
  int x;
  char c;
  F0R(i, n) {
    cin >> x;
    sum2 -= m[x]/2;
    sum4 -= m[x]/4;
    m[x]++;
    sum2 += m[x]/2;
    sum4 += m[x]/4;
  }
  cin >> q;
  F0R(i, q){
    cin >> c >> x;
    sum2 -= m[x]/2;
    sum4 -= m[x]/4;
    if(c == '+') m[x]++;
    else m[x]--;
    sum2 += m[x]/2;
    sum4 += m[x]/4;

    string out = (sum4 >= 1 && sum2 >= 4) ? "YES" : "NO";
    cout << out << "\n";

  }





  return 0;
}
