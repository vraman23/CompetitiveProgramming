#include <bits/stdc++.h>

using namespace std;


typedef long long ll;
typedef pair<int,int> pi;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pi> vpi;

template <typename T> void setmax(T& a, const T& b) { if (b > a) a = b; }

#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)
#define f first
#define s second
#define pb push_back
#define sz(a) int((a).size())


const int MOD = 1e9+7; // 998244353;
const int MX = 1000; //
const ll INF = 1e18; //
string ds = "RLUD";
int di[] = {0, 0, -1, 1};
int dj[] = {1, -1, 0, 0};

string maze[MX];
int n, m, si, sj, gi, gj, path[MX][MX];



bool o(int x, int y){
  return (x < 0 || x >= n || y < 0 || y >= m);
}

struct node{
  int i, j;
};

node init(int i, int j){
  return {i, j};
}

void bfs(){
  queue<node> q;
  q.push(init(si, sj));
  maze[si][sj] = '#';
  while(!q.empty()){
    node nn = q.front();
    q.pop();
    if(nn.i == gi && nn.j == gj){
      cout << "YES\n";
      int i = nn.i, j = nn.j;
      string out = "";
      while(i != si || j != sj){
        int k = path[i][j];
        out.pb(ds[k]);
        i-= di[k];
        j-= dj[k];
      }
      reverse(out.begin(), out.end());
      cout << sz(out) << "\n" << out << "\n";
      return;
    }
    for(int k = 0; k < 4; k++){
      int ni = nn.i + di[k];
      int nj = nn.j + dj[k];
      if(!o(ni, nj) && maze[ni][nj] != '#'){
        maze[ni][nj] = '#';
        q.push(init(ni, nj));
        path[ni][nj] = k;
      }
    }
  }
  cout << "NO" << "\n";
}

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); // see Fast Input & Output
  cin >> n >> m;
  F0R(i, n){
    cin >> maze[i];
    F0R(j, m){
      if (maze[i][j] == 'A') si = i, sj = j;
      else if (maze[i][j] == 'B') gi = i, gj = j;
    }
  }
  bfs();
}
