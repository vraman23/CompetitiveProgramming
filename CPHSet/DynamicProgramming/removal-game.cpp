#include <iostream>
#include <vector>
#include <deque>

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;

#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //

int minimax(deque<int> x, int player){
  // for(int v : x) cout << v << " ";
  // cout << "\n";
  if(x.size() == 1) {
    if (player == 0) return x.at(0);
    else return 0;
  }
  int f = x.at(0);
  int b = x.at(x.size()-1);
  if (player) {
    x.pop_front();
    int val = f + minimax(x, 1-player);
    x.push_front(f);
    x.pop_back();
    return  max(val, b + minimax(x, 1-player));
  } else {
    x.pop_front();
    int val = minimax(x, 1-player);
    x.push_front(f);
    x.pop_back();
    return min(val, minimax(x, 1-player));
  }
}

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  int n, v;
  cin >> n;
  deque<int> x;
  F0R(i, n) {
    cin >> v;
    x.push_back(v);
  }
  cout << minimax(x, 0) << "\n";



  return 0;
}
