#include<iostream>
#include <vector>
using namespace std;
int func(int);

int main(){
	int n = 0, d = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (func(i) == 1) {
			d++;
		}
		else
			continue;
	}
	cout << d << endl;
}

int func(int n) {
	int dif = n % 10 - (n / 10) % 10;
	int i;
	while (n > 0) {
		i = 0;
		if (n % 10 - (n / 10) % 10 == dif) {
			n = n / 10;
			i++;
			if (n < 10)
				break;
		}
		else
			break;
	}
	if (i == 0) {
		return 0;
	}
	else {
		return 1;
	}
}
