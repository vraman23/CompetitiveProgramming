#include <bits/stdc++.h>
#include <array>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;


#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)
#define ar array

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
string ds = "RLDU";

const int mxN = 1e3;
int n, m, si, sj, gi, gj, d[mxN][mxN];
string grid[mxN], p[mxN];

bool e(int x, int y){
  return (x < n && x >= 0 && y < m && y >= 0);
}

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  F0R(i, n){
    grid[i] = string(m, 0);
    p[i] = string(m, 0);
    F0R(j, m){
      cin >> grid[i][j];
      if(grid[i][j] == 'A') si = i, sj = j;
      else if(grid[i][j] == 'B') gi = i, gj = j;
    }
  }

  queue<ar<int, 2> > qu;
  ar<int, 2> start = {si, sj};
  qu.push(start);
  while(!qu.empty()){
    ar<int, 2> u = qu.front(); qu.pop();
    grid[u[0]][u[1]] = '#';
    for(int k = 0; k < 4; k++){
      int nx = u[0] + dx[k];
      int ny = u[1] + dy[k];
      if(e(nx, ny) && grid[nx][ny] != '#'){
        ar<int, 2> next = {nx, ny};
        qu.push(next);
        p[nx][ny] = ds[k];
        d[nx][ny] = k+1;
      }
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cout << d[i][j] << "";
    } cout <<"\n";
  }

  if(p[gi][gj]){
    cout << "YES" <<"\n";
    string path = "";
    path += p[gi][gj];
    int i = gi, j = gj;
    while(i != si && j != sj){
      d[i][j] -= 1;
      i -= dx[d[i][j]];
      j -= dy[d[i][j]];
      // cout << i << j << "\n";
      path += p[i][j];

    }
    cout << path.length() <<"\n";
    cout << path <<"\n";
  } else {
    cout << "NO"<<"\n";
  }


  return 0;
}
