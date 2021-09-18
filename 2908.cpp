#include<iostream>
#include<string>
using namespace std;
int reverse(int);

int main() {
	int a = 0, b = 0;
	cin >> a;
	cin >> b;
	
	if (reverse(a) > reverse(b)) {
		cout << reverse(a) << endl;
	}
	else {
		cout << reverse(b) << endl;
	}
}

int reverse(int n) {
	int a, b, c = 0;
	a = n % 10;
	b = (n / 10) % 10;
	c = n / 100;
	
	return 100 * a + 10 * b + c;
}
