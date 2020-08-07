#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;

#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //

int main() {
  ios:: sync_with_stdio(0);
  int t, n;
  string str;
  cin >> t;
  while(t--){
    vector<pair<int, int>> groups;
    cin >> n >> str;
    int assignments[n];
    F0R(i, n){
      if (groups.size() == 0) {
        groups.push_back(make_pair(i, 1));
        assignments[i] = 1;
      } else {
        for(int j= 0; j < groups.size(); j++){
          if (str[groups[j].first] != str[i]) {
            assignments[i] = assignments[groups[j].first];
            groups[j].first = i;
            groups[j].second = groups[j].second + 1;
            break;
          } else if(j == groups.size() - 1){
            groups.push_back(make_pair(i, 1));
            assignments[i] = groups.size();
            break;
          }

        }
      }
    }
    cout << groups.size() << "\n";
    F0R(i, n) cout << assignments[i] << " ";
    cout << "\n";
  }

  return 0;
}
