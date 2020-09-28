/*
Description: Kosaraju's Algorithm for finding the Strongly Connected Components.
Source: Benjamin Qi, Github
Time: O(|V| + |E|)
*/

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
