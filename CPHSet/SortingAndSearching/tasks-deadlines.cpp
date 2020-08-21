#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;

#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //

const ll mxN = 2e5;
ll n;

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n;

  ll d, score = 0;
  vector<ll> tasks(n);
  F0R(i, n) {
    cin >> tasks[i] >> d;
    score += d;
  }

  sort(tasks.begin(), tasks.end());
  for(ll i = 0; i < n; i++){
    score -= (n-i) * tasks[i];
  }

  cout << score << "\n";



  return 0;
}
