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

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
string ds = "RLDU";

int n, m;
bool possible(int x, int y){
  return (x < n && x >= 0 && y < m && y >= 0);
}

void bfs(){
  queue<pair<pi, string>> fringe;
  unordered_set<pi> closed;
  fringe.push(make_pair(start, ""));
  while(!fringe.empty()){
    pair<pi, string> node = fringe.front();
    fringe.pop();
    pi pos = node.first;
    string path = node.second;
    if(!possible(pos.first, pos.second) || !grid[pos.first][pos.second]) continue;
    if(pos == goal){
      // cout << "YES\n" << path.length() << "\n" << path << "\n";
      break;
    }
    if(!closed.count(pos)){
      closed.insert(pos);
      F0R(i, 4)
        fringe.push(make_pair( make_pair(pos.first + dx[i], pos.second + dy[i]), path + ds[i]));
    }
  }
  cout << "NO" << "\n";
}


int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);


  return 0;
}
