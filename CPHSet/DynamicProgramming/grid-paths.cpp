#include <iostream>
#include <vector>

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
  int n;
  string str;
  cin >> n;
  int grid[n][n];
  F0R(i, n){
    cin >> str;
    F0R(j, n) {
      grid[i][j] = (str[j] == '.') ? 1 : 0;
      // cout << grid[i][j];
    }
    // cout <<"\n";
  }
  vector<vi> paths(n, vi(n, 0));
  paths[0][0] = 1;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if (!grid[i][j]) paths[i][j] = 0;
      else {
        if (i-1 >= 0 && grid[i-1][j]) paths[i][j] += paths[i-1][j];
        if (j-1 >= 0 && grid[i][j-1]) paths[i][j] += paths[i][j-1];
        paths[i][j] %= MOD;
      }
    }
  }

  cout << paths[n-1][n-1] << "\n";

  return 0;
}
