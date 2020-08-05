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

void print(vector<char> v) {
  F0R(i, v.size()){
    cout << v[i];
  }
  cout << "\n";
}

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  vector<char> perm;

  string input;
  cin >> input;

  F0R(i, input.length()) {
    perm.PB(input[i]);
  }
  sort(perm.begin(), perm.end());
  int count = 0;
  do count++;
  while (next_permutation(perm.begin(), perm.end()));

  cout << count << "\n";
  sort(perm.begin(), perm.end());
  do print(perm);
  while (next_permutation(perm.begin(), perm.end()));



  return 0;
}
