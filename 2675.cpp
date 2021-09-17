#include<iostream>
#include<string>
using namespace std;

int main(){
	int t = 0, r = 0;
	string word;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> r;
		cin >> word;
		for (int k = 0; k < word.size(); k++) {
			for (int j = 0; j < r; j++) {
				cout << word[k];
			}
		}
		cout << endl;
	}
}
