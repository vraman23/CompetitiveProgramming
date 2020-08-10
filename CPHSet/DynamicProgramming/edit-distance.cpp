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
  string one, two;
  cin >> one >> two;
  int n = one.size();
  int m = two.size();
  vector<vi> edit(n+1, vi(m+1, 1e9));
  edit[0][0] = 0;
  for(int a = 0; a <= n; a++){
    for(int b = 0; b <= m; b++){
      if (b) edit[a][b] = min(edit[a][b], edit[a][b-1] + 1);
      if (a) edit[a][b] = min(edit[a][b], edit[a-1][b] + 1);
      if (a && b) {
        int cost = (one[a-1] == two[b-1]) ? 0 : 1;
        edit[a][b] = min(edit[a][b], edit[a-1][b-1] + cost);
      }
    }
  }
  cout << edit[n][m] << "\n";

  return 0;
}
