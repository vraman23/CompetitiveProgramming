#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;


#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //

const int nMAX = 100000;
int n, m;
vector<int> adj[nMAX + 1];
bool visited[nMAX + 1];
vector<vi> blocks(nMAX);

void dfs(int s, int index){
  if(visited[s]) return;
  visited[s] = true;
  blocks[index].push_back(s);
  for(auto u : adj[s]) dfs(u, index);
}


int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  int a, b;
  cin >> n >> m;
  F0R(i, m) {
    cin >> a >> b;
    adj[a].push_back(b);
  }

  int numBlocks = 0;
  for(int i = 1; i <= n; i++){
    if(!visited[i]){
      dfs(i, numBlocks);
      numBlocks++;
    }
  }
  cout << numBlocks - 1 << "\n";
  for(int i = 0; i < numBlocks - 1; i++){
    cout << blocks[i][0] << " " << blocks[i+1][0] << "\n";
  }



  return 0;
}
