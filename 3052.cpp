#include<iostream>
using namespace std;

int main() {
	int arra[10] = {}, arrb[42] = {}, t = 0;
	for (int i = 0; i < 10; i++) {
		cin >> arra[i];
		if (arrb[arra[i] % 42] == 0) {
			arrb[arra[i] % 42]++;
		}
	}
	for (int i = 0; i < 42; i++) {
		if (arrb[i] > 0) {
			t++;
		}
	}
	cout << t;
}
