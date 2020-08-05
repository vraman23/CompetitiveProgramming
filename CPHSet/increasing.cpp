#include <iostream>
using namespace std;

int main() {
  long long int n;
  cin >> n;
  long long int current;
  cin >> current;
  long long int next;
  long long int count = 0;
  for(int i = 1; i < n; i++) {
    cin >> next;
    if(next < current) count += current - next;
    else current = next;
  }
  cout << count << "\n";
}
