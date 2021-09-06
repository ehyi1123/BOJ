#include<iostream>
using namespace std;

int main() {
	int i = 0, j = 1, a[1000] = { 1 }, b[1000] = { 1 };

	while (a[i] != 0 || b[i] != 0) {
		i++;
		cin >> a[i] >> b[i];
	}
	while (j < i) {
		cout << a[j] + b[j] << endl;
		j++;
	}
	return 0;
}
