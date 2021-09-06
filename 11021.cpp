#include<iostream>
using namespace std;

int main() {
	int t = 0, a[1000], b[1000];
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a[i] >> b[i];
	}
	for (int i = 0; i < t; i++) {
		cout << "Case #" << i + 1 << ": " << a[i] + b[i] << "\n";
	}

	return 0;
}
