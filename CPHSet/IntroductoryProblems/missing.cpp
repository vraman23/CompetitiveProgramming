#include <iostream>
using namespace std;

int main() {
  long long int n;
  cin >> n;
  long long int sum = n * (n+1)/2;
  long long int x;
  for(int i = 0; i < n-1; i++){
    cin >> x;
    sum -= x;
  }

  cout << sum << "\n";
}
