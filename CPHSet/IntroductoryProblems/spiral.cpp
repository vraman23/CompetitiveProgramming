#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define F0R(i, a) for(int i = 0; i < a; i++)

int n;

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  ll x, y;

  F0R(i, n) {
    cin >> x >> y;
    if(x > y){
      if (x % 2 == 0) {
        cout << x*x - y +1 << "\n";
      } else {
        cout << (x-1)*(x-1) + y << "\n";
      }
    } else if (x < y){
      if (y % 2 == 1) {
        cout << y*y - x +1 << "\n";
      } else {
        cout << (y-1)*(y-1) + x << "\n";
      }
    } else {
      if(x % 2 == 0) cout << x*x - y + 1 << "\n";
      else cout << y * y - x + 1 << "\n";
    }

  }


}
