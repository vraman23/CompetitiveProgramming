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

int N;
vector<int> adj[MX+1], radj[MX+1], order, comps;
int comp[MX+1];
bool vis[MX+1];

void add(int x, int y) {
  adj[x].push_back(y);
  radj[y].push_back(x);
}

void dfs(int x){
  vis[x] = true;
  for(auto y : adj[x]) {
    if(!vis[y]) dfs(y);
  }
  order.push_back(x);
}

void dfs2(int x, int scc){
  comp[x] = scc;
  for(auto y : radj[x]) {
    if(!comp[y]) dfs2(y, scc);
  }
}

void scc(){
  for(int i = 1; i <= N; i++) {
    if (!vis[i]) dfs(i);
  }
  reverse(order.begin(), order.end());
  for(auto x : order){
    if(!comp[x]) {
      dfs2(x, x);
      comps.push_back(x);
    }
  }
}

int main() {
  cin >> N;
  int m; cin >> m;
  F0R(i, m) {
    int x, y; cin >> x >> y;
    add(x, y);
  }
  scc();
  for(int i = 1; i <= N; i++) cout << comp[i] << " ";
  cout << "\n";

}
