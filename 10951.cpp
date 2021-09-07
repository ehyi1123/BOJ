#include<iostream>
using namespace std;

int main() {
	int i = 0, j = 0, a[1000] = { 1 }, b[1000] = { 1 };

	while (true) {
		cin >> a[i] >> b[i];
		if (cin.eof() == true) {
			break;
		}
		i++;
	}while (j < i) {
		cout << a[j] + b[j] << endl;
		j++;
	}
}
