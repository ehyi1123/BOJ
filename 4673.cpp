#include<iostream>
#include <vector>
using namespace std;
int d(int);

int main() {
	int n = 1;
	int arr[100000] = {};
	for (int i = 1; i <= 10000; i++) {
		arr[d(i)] = i;
	}
	for (int i = 1; i <= 10000; i++) {
		if (arr[i] == 0) {
			cout << i << endl;
		}
	}
}



int d(int n) {
	vector<int> a;
	int h = 0;
	int dn = n;
	while (n > 0) {
		a.push_back(n % 10);
		n = n / 10;
	}
	for (int i = 0; i < a.size(); i++) {
		dn += a[i];
	}
	return dn;
}
