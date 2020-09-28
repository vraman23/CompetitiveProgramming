/*
Description: Breadth First Search
Source: Competitive Programming Handbook
Time: O(|V|log|V| + |E|)
*/

int N = 100000;
vector<int> adj[MX+1];
bool seen[MX+1];
int dist[MX+1];

void pre(int u){
  return;
}

void bfs(int x){
  queue<int> q;
  visited[x] = true;
  dist[x] = 0;
  q.push(x);
  while(!q.empty()){
    int s = q.front(); q.pop();
    pre(s);
    for(auto u : adj[s]){
      if(seen[u]) continue;
      seen[u] = true;
      dist[u] = dist[s]+1;
      q.push(u);
    }
  }
}
