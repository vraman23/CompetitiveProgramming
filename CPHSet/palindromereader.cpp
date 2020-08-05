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

string revStr(string str) {
  string rev;
  for(int i = str.length()-1; i>= 0; i--) {
    rev += str[i];
  }
  return rev;
}

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);

  string str;
  cin >> str;
  map<char, int> m;
  F0R(i, str.length()) {
    m[str[i]]++;
  }

  if(str.length() % 2 == 0) {
    for(auto x : m) {
      if(x.second % 2 == 1) {
        cout << "NO SOLUTION\n";
        return 0;
      }
    }
    string out = "";
    for(auto x : m) {
      int count = 0;
      count = x.second/2;
      F0R(i, count){
        out += x.first;
      }
    }
    cout << out + revStr(out) << "\n";
  }
  else {
  string odd = "";
  for(auto x : m) {
    if(x.second % 2 == 1 ){
      if(odd == "") {
        for(int i = 0; i < x.second; i++) {
          odd += x.first;
        }
      } else {
          cout << "NO SOLUTION\n";
          return 0;
      }
    }
  }
  string out;
  for(auto x : m) {
    if(x.second % 2 == 0) {
      int count = 0;
      count = x.second/2;
      F0R(i, count){
        out += x.first;
      }
    }
  }
  cout << out + odd + revStr(out) << "\n";
  }

  return 0;
}
