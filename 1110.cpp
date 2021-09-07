#include<iostream>
using namespace std;

int main() {
	int n = 0, a = 0, b = 0, m = 0, i = 0;
	cin >> n;
	a = n / 10;
	b = n % 10;
	while (1) {
		m = a + b;
		a = b;
		b = m % 10;
		i++;
		if (a * 10 + b == n) 
			break;
	}
	cout << i;
}

