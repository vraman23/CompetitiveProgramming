#include <iostream>
using namespace std;

int main() {
	long long int n;
	cin >> n;
	while (n > 1) {
		cout << n << " ";
		n = (n % 2 == 0) ? n/2 : 3*n + 1;
	}

	cout << n << "\n";
}
