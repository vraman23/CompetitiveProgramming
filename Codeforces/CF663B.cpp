#include <iostream>
#include <vector>
#include <algorithm>

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
  int n, m, t;
  int grid[100][100];
  cin >> t;
  while(t--){
    cin >> n >> m;
    char c;

    F0R(i, n){
      F0R(j, m){
        cin >> c;
        grid[i][j] = (c == 'R') ? 1 : 0;
      }
    }
    int count = 0;
    for(int i = 0; i < n - 1; i++){
      if (grid[i][m-1]) count++;
    }
    for(int i = 0; i < m - 1; i++){
      if (!grid[n-1][i]) count++;
    }
    cout << count << "\n";
  }
  return 0;
}
