/*
Description: Bellman-Ford Algorithm, shortest paths with negative edge weights
Source: Competitive Programming Handbook
Time: O(|V| * |E|)
*/

int N;
int dist[MX+1];
vector<tuple<int, int, int> > edges;

void BellmanFord(int x){
  for(int i = 1; i <= N; i++) dist[i] = INF;
  dist[x] = 0;
  for(int i = 1; i <= n-1; i++){
    for (auto e : edges){
      int a, b, w;
      tie(a, b, w) = e;
      dist[b] = min(dist[b], dist[a] + w);
    }
  }
}
