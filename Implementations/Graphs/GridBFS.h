/*
Description: BFS in an NxM grid maze, finding the shortest path between (si, sj) and (gi, gj), if it exists.
Verification: Labyrinth - https://cses.fi/problemset/task/1193
*/

const string ds = "RLUD";
const int di[] = {0, 0, -1, 1};
const int dj[] = {1, -1, 0, 0};
const int MX = 1e3;

string maze[MX];
int n, m, si, sj, gi, gj, path[MX][MX];

bool o(int x, int y){
  return (x < 0 || x >= n || y < 0 || y >= m);
}

struct node{
  int i, j;
};

node init(int i, int j){
  return {i, j};
}

void bfs(){
  queue<node> q;
  q.push(init(si, sj));
  maze[si][sj] = '#';
  while(!q.empty()){
    node nn = q.front();
    q.pop();
    if(nn.i == gi && nn.j == gj){
      cout << "YES\n";
      int i = nn.i, j = nn.j;
      string out = "";
      while(i != si || j != sj){
        int k = path[i][j];
        out.pb(ds[k]);
        i-= di[k];
        j-= dj[k];
      }
      reverse(out.begin(), out.end());
      cout << sz(out) << "\n" << out << "\n";
      return;
    }
    for(int k = 0; k < 4; k++){
      int ni = nn.i + di[k];
      int nj = nn.j + dj[k];
      if(!o(ni, nj) && maze[ni][nj] != '#'){
        maze[ni][nj] = '#';
        q.push(init(ni, nj));
        path[ni][nj] = k;
      }
    }
  }
  cout << "NO" << "\n";
}
