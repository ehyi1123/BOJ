#include<iostream>
using namespace std;

int main() {
	int c = 0, n = 0, scr[1000] = {};

	cin >> c;
	for (int i = 0; i < c; i++) {
		int sum = 0;
		int k = 0;
		double average = 0;
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> scr[j];
			sum += scr[j];
		}
		average = sum / n;
		for (int j = 0; j < n; j++) {
			if (scr[j] > average) {
				k++;
			}
		}
		cout << fixed;
		cout.precision(3);
		cout << ((double)k / n ) * 100 << "%" << endl;
	}
}
