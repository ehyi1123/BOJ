#include<iostream>
using namespace std;

int main() {
	int a = 0, b = 0, c = 0, t = 0;
	cin >> a >> b >> c;
	t = a * b * c;

	int arr[10] = {};
	while (t > 0) {
		arr[t % 10] ++;
		t = t / 10;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
}
