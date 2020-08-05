#include <iostream>
using namespace std;

int main() {
	string str;
	cin >> str;
	int maxLen = 1;
	int currLen = 1;
	for(int i = 1; i < str.length(); i++){
		if(str[i] == str[i-1]) currLen++;
		else currLen = 1;
		maxLen = max(maxLen, currLen);
	}
	cout << maxLen << "\n";
}
