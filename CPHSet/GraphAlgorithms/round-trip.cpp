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
#define pb push_back
#define sz(a) int((a).size())

const int MOD = 1e9+7; // 998244353;
const int MX = 1e5; //
const ll INF = 1e18; //

int N = 100000;
vector<int> adj[MX+1];
int parent[MX+1];
bool seen[MX+1];
vector<int> cycle;

void dfs(int u, int pu = -1){
  parent[u] = pu;
  seen[u] = 1;
  for(int v : adj[u]) {
    if(v == pu) {
      continue;
    }
    if (seen[v]){
      cycle.push_back(v);
      while(v != u){
        cycle.push_back(u);
        u = parent[u];
      }
      cycle.push_back(v);
      cout << cycle.size() << "\n";
      for(int a : cycle) cout << a << " ";
      exit(0);
    } else dfs(v, u);
  }
}


int main() {
  cin >> N;
  int m; cin >> m;
  F0R(i, m) {
    int x, y; cin >> x >> y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }

  for(int i = 1; i <= N; i++){
    if (!seen[i]){
      dfs(i);
    }
  }
  cout << "IMPOSSIBLE" << "\n";


}
