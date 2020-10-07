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

int arr[MX];

int solve(int l, int r){
  if (r-l == 1) return 1;
  int m = l + (r-l)/2;
  int one = 0;
  for(int i = m-1; i >= l; i--){
    if(arr[i]<= arr[i+1]) one++;
    else break;
  }
  int two = 1;
  for(int i = m; i + 1 < r; i++){
    if(arr[i] <= arr[i+1]) two++;
    else break;
  }
  // cout << one*two << "\n";
  return one*two + solve(l, m) + solve(m, r);
}


int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); // see Fast Input & Output
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    F0R(i, n) cin >> arr[i];
    cout << solve(0, n) << "\n";
  }
}
