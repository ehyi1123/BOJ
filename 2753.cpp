#include<iostream>
using namespace std;
int main() {
	int yr = 0 ;
	cin >> yr;
	if (yr % 4 == 0) {
		if ( yr % 100 != 0 || yr % 400 == 0) {
			cout << "1" << endl;
		}
		else {
			cout << 0 << endl;
		}
	}
	else {
		cout << 0 << endl;
	}
	return 0;
}
