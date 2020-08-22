#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;


#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)
#define pb push_back
#define f first
#define s second

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //

const int mxN = 1e5;
int n, m;
vi adj[mxN+1];
int parent[mxN+1];

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  int a, b;
  cin >> n >> m;
  F0R(i, m){
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  queue<int> q;
  q.push(1);
  parent[1] = 1;
  while(!q.empty()){
    int node = q.front(); q.pop();
    // cout << node << "\n";

    for(int v : adj[node]){
      // cout << node <<" " << v <<"\n";
      if(!parent[v]) {
        parent[v] = node;
        q.push(v);
      }
    }
  }

  if(!parent[n]) cout << "IMPOSSIBLE" << "\n";
  else {
    vi path;
    int node = n;
    path.pb(node);
    while(node != 1){
      // cout << node << "\n";
      node = parent[node];
      path.pb(node);
    }
    cout << path.size() << "\n";
    for(auto it = path.rbegin(); it != path.rend(); it++) cout << *it << " ";
  }

  return 0;
}
