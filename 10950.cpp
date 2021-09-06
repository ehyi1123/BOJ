#include<iostream>
using namespace std;

int main() {
	int i = 0, arra[1000], arrb[1000];
	cin >> i;
	for (int j = 0; j < i; j++) {
		cin >> arra[j];
		cin >> arrb[j];
	}
	for (int j = 0; j < i; j++) {
		cout << arra[j] + arrb[j] << endl;
	}
	return 0;
}
