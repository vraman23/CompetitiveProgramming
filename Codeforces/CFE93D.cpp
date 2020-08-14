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

int R, G, B, r[200], g[200], b[200];
int area[201][201][201];

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> R >> G >> B;

  F0R(i, R) cin >> r[i];
  F0R(i, G) cin >> g[i];
  F0R(i, B) cin >> b[i];

  sort(r, r+R);
  sort(g, g+G);
  sort(b, b+B);

  for(int i = 0; i <= R; i++) {
    for(int j = 0; j <= G; j++){
      for(int k = 0; k <= B; k++){
        if (i && j)
          area[i][j][k] = max(area[i][j][k], area[i-1][j-1][k] + r[i-1]*g[j-1]);
        if (i && k)
          area[i][j][k] = max(area[i][j][k], area[i-1][j][k-1] + r[i-1]*b[k-1]);
        if (j && k )
          area[i][j][k] = max(area[i][j][k], area[i][j-1][k-1] + g[j-1]*b[k-1]);
      }
    }
  }
  cout << area[R][G][B] << "\n";





}
