/*
Description: Dijkstra's Algorithm for finding single source shortest paths
Source: Competitive Programming Handbook
Time: O(|V|log|V| + |E|)
*/

int N;
bool seen[MX+1];
int dist[MX+1];
vector<int> adj[MX+1];
priority_queue<pair<int, int> > q;

void Dijkstra(int x){
  for(int i = 1; i <= N; i++){
    dist[i] = INF;
  }
  dist[x] = 0;
  q.push({0, x});
  while(!q.empty()){
    int a = q.top().second; q.pop();
    if(seen[a]) continue;
    seen[a] = true;
    for(auto u : adj[a]){
      int b = u.first, w = u.second;
      if(dist[a] + w < dist[b]){
        dist[b] = dist[a] + w;
        q.push({-distance[b], b});
      }
    }
  }
}
