#include<iostream>
#include<string>
using namespace std;

int main() {
	string word;
	int n = 0;
	cin >> word;

	for (int i = 0; i < word.size(); i++) {
		if (word[i] == 'c') {
			if (word[i + 1] == '=') {
				i++;
			}
			else if (word[i + 1] == '-') {
				i++;
			}
		}
		else if (word[i] == 'd') {
			if (word[i + 1] == 'z'&&word[i + 2] == '=') {
				i += 2;
			}
			else if (word[i + 1] == '-') {
				i++;
			}
		}
		else if (word[i] == 'l') {
			if (word[i + 1] == 'j') {
				i++;
			}
		}
		else if (word[i] == 'n') {
			if (word[i + 1] == 'j') {
				i++;
			}
		}
		else if (word[i] == 's') {
			if (word[i + 1] == '=') {
				i++;
			}
		}
		else if (word[i] == 'z') {
			if (word[i + 1] == '=') {
				i++;
			}
		}
		n++;
	}
	cout << n << endl;
}
