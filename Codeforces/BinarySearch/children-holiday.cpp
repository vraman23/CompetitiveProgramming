// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/D
#include <bits/stdc++.h>
#include <array>

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
#define ar array

const int MOD = 1e9+7; // 998244353;
const int MX = 1e3; //
const ll INF = 1e18; //
ll m, n, t[MX], z[MX], y[MX];

//number of balloons by worker i in t seconds
ll bpw(ll time, ll i){
  ll rate = t[i] * z[i] + y[i]; // seconds per z_i balloons
  ll count = (time/rate) * z[i];
  // cout << t << " " << i << "\n";
  // cout << rate << " " << count << "\n";
  // cout << count + ((time - count * rate) >= t[i]) << "\n";
  return count + min( (time - count * rate)/t[i], z[i]);
}

bool good(ll time){
  ll sum = 0;
  F0R(i, n) sum += bpw(time, i);
  return sum >= m;
}

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> m >> n;
  F0R(i, n) cin >> t[i] >> z[i] >> y[i];
  ll l = -1;
  ll r = 1;
  while(!good(r)) r *= 2;
  while(r > l + 1){
    ll m = l + (r - l) / 2;
    if(good(m)) r = m;
    else l = m;
  }
  // cout << bpw(4, 0) + bpw(4, 1) << "\n";

  // cout << "\n\n";

  // cout << bpw(2, 0) << " " << bpw(2, 1) << "\n";

  // cout << "\n\n\n\n";
  cout << r << "\n";
  F0R (i, n) cout << bpw(r, i) << " ";;
  cout << "\n";


  return 0;
}
