#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)

const int MOD = 1e9 + 7;

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  int out = 1;
  F0R(i, n) {
    out = (out * 2) % MOD;
  }

  cout << out << "\n";

}
