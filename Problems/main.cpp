#include <bits/stdc++.h>

using namespace std;


typedef long long ll;
typedef pair<int,int> pi;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pi> vpi;

template <typename T> void setmax(T& a, const T& b) { if (b > a) a = b; }

#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)
#define f first
#define s second
#define pb push_back
#define sz(a) int((a).size())


const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //

int mul(int a, int b){
  return ((a*b)%MOD + MOD) % MOD;
}

int add(int a, int b){
  return ((a+b)%MOD + MOD) % MOD;;
}

int nC2(int a){
  if (a%2 == 0) return mul(a/2, a-1);
  else return mul(a, (a-1)/2);
}

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  string s; cin >> s;
  int n = sz(s);
  vi values(n);
  F0R(i, n) {
    values[i] = s[n-i-1] - '0';
    // cout << values[i] << "\n";
  }
  long total = 0;
  long ags = 0;
  long ten = 1;
  for(int i = 0; i < n; i++){
    total = add(total, mul(values[i], mul(nC2(n-i), ten)));
    total = add(total, mul(values[i], ags));
    ags = add(ags, mul(i+1, ten));
    ten = mul(ten, 10);
  }
  cout << total << "\n";
}
