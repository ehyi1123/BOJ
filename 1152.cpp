#include<iostream>
#include<string>
using namespace std;

int main() {
	int n = 0;
	string stc;
	getline(cin, stc);
	for (int i = 0; i < stc.size(); i++) {
		if (stc[i] == ' ') {
			if (i == 0 || i == stc.size() - 1) {
				continue;
			}
			else {
				n++;
			}
		}
	}
	if (stc[0] == ' ' && stc.size() == 1) {
		cout << n << endl;
	}
	else {
		cout << n + 1 << endl;
	}
}
