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
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
string ds = "RLDU";

int n, m;
bool possible(int x, int y){
  return (x < n && x >= 0 && y < m && y >= 0);
}

int grid[1000][1000];

void dfs(int x, int y){
  if (!possible(x, y) || !grid[x][y]) return;
  grid[x][y] = 0;
  F0R(i, 4) dfs(x + dx[i], y + dy[i]);
}


int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  char x;
  F0R(i, n){
    F0R(j, m){
      cin >> x;
      grid[i][j] = (x == '#') ? 0 : 1;
      // cout << grid[i][j];
    }
    // cout << "\n";
  }
  int count = 0;
  F0R(i, n){
    F0R(j, m){
      if (grid[i][j]) {
        count++;
        dfs(i, j);
      }
    }
  }
  cout << count << "\n";


  return 0;
}
