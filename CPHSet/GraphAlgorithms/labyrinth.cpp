#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;


#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)
#define f first
#define s second

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
string ds = "RLDU";

const int mxN = 1e3;
int n, m, si, sj, gi, gj;
string s[mxN];
bool e(int x, int y){
  return (x < n && x >= 0 && y < m && y >= 0);
}

void bfs(){
  queue<pair<pi, string> > fringe;
  fringe.push(make_pair(make_pair(si, sj), ""));
  s[si][sj] = '#';
  // vector<vi> count(n, vector<int>(m));
  while(!fringe.empty()){
    pair<pi, string> node = fringe.front();
    fringe.pop();
    pi pos = node.f;
    string path = node.s;
    // ++count[pos.f][pos.s];
    if(pos.f == gi && pos.s == gj){
      cout << "YES\n" << path.length() << "\n" << path << "\n";
      // for(int i = 0; i < n; i++){
      //   for(int j = 0; j < m; j++) cout << count[i][j];
      //   cout << "\n";
      // }
      return;
    }
    F0R(i, 4){
      int nx = pos.f + dx[i];
      int ny = pos.s + dy[i];
      if(e(nx, ny) && s[nx][ny] != '#'){
        s[nx][ny] = '#';
        fringe.push(make_pair( make_pair(nx, ny), path + ds[i]));
      }
    }
  }
  cout << "NO" << "\n";
  // for(int i = 0; i < n; i++){
  //   for(int j = 0; j < m; j++) cout << count[i][j];
  //   cout << "\n";
  // }
}

int main() {
  // freopen("input.txt", "r", stdin);
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  F0R(i, n){
    cin >> s[i];
    F0R(j, m){
      if (s[i][j] == 'A') si = i, sj = j;
      if (s[i][j] == 'B') gi = i, gj = j;
    }
  }

  bfs();
  return 0;
}
