#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;


#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)
#define pb push_back

const int MOD = 1e9+7; // 998244353;
const int MX = 1e5; //
const ll INF = 1e18; //

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
string ds = "RLDU";

int n, m;
vi adj[MX + 1];
int color[MX+1]; //0, 1, 2

//dfs w/ bipartite check
bool dfs(int u, int c){
  color[u] = c;
  for(int v : adj[u]){
    if(color[v] == c) return false;
    else if(!color[v] && !dfs(v, 3-c)) return false;
  }
  return true;
}

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  int a, b;
  F0R(i, m){
    cin >> a >> b;
    adj[a].pb(b);
    adj[b].pb(a);
  }
  for(int i = 1; i <= n; i++){
    if(!color[i] && !dfs(i, 1)){
      cout << "IMPOSSIBLE" << "\n";
      return 0;
    }
  }
  for(int i = 1; i <= n; i++) cout << color[i] << " ";
  return 0;
}
