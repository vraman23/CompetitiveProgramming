#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)

int t;

bool greedy(int a, int b) {
  while(a > 0 && b > 0) {
    if (a >= b) {
      a -= 2, b -= 1;
    } else a -= 1, b -= 2;
  }
  return (a == 0 && b == 0);
}


int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  int a, b;
  cin >> t;

  F0R(i, t){
    cin >> a >> b;
    if(a < b) {
      int temp = a;
      a = b;
      b = temp;
    }
    if(a > 2*b) cout << "NO\n";
    else if ((a+b)%3 == 0) cout <<"YES\n";
    else cout << "NO\n";
  }

  return 0;
}
