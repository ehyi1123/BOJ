#include<iostream>
using namespace std;

int main() {
	int n = 0, max = 0;
	double bfr[1000] = {}, aft[1000] = {};
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> bfr[i];
		if (max < bfr[i]) {
			max = bfr[i];
		}
	}
	double sum = 0;
	for (int i = 0; i < n; i++) {
		aft[i] = bfr[i] / max * 100;
		sum += aft[i];
	}
	cout << sum / n;
}


