#include<iostream>
#include<string>
using namespace std;

int main() {
	int arr[26] = {};
	string word;
	cin >> word;
	int max = 0;

	for (int i = 0; i < word.size(); i++) {
		arr[toupper(word[i]) - 'A']++;
	}
	int a = 0;
	int n = 0;
	for (int i = 0; i < 26; i++) {
		if (max < arr[i]) {
			max = arr[i];
			a = i;
			n = 0;
		}
		else if (max == arr[i]) {
			if (max != 0) {
				n++;
			}
		}
	}
	if (n == 0) {
		cout << (char)(a + 65) << endl;
	}
	else if (n > 0) {
		cout << '?' << endl;
	}
}
