#include<iostream>
#include<string>
using namespace std;

int main() {
	char arr[100] = {};
	int n = 0;
	int sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i] - '0';
	}
	cout << sum << endl;
}
