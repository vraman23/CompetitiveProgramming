/*
Description: Depth-first Search
Source: Competitive Programming Handbook
Time: O(|V|+ |E|)
*/

int N = 100000;
vector<int> adj[MX+1];
bool seen[MX+1];

void pre(int u){
  return;
}
void post(int u){
  return;
}

void dfs(int u){
  if(seen[u]) return;
  seen[u] = true;
  pre(u);
  for(int v : adj[u]) {
    dfs(v);
  }
  post(v);
}
