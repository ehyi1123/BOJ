#include<iostream>
#include <string>
using namespace std;

int main() {
	int n = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		int point = 0;
		int sum = 0;
		string str = "";

		cin >> str;
		for (int j = 0; j < str.size(); j++) {
			if (str[j] == 'O') {
				point++;
				sum += point;
			}
			else {
				point = 0;
			}
		}
		cout << sum << endl;
	}
}


