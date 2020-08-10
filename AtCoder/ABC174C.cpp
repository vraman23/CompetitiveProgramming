#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;

#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  int k;
  cin >> k;
  if (k%7 == 0) k/=7;
  if (__gcd(10, k) != 1) cout << "-1" << "\n";
  else {
    int count = 1;
    int a = (1%k);
    while(a != 0){
      a = (10 * a + 1) % k;
      count++;
    }
    cout << count << "\n";
  }

  return 0;
}
