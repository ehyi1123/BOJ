#include<iostream>
#include<string>
using namespace std;

int main() {
	int time = 0;
	string word;
	cin >> word;

	for (int i = 0; i < word.size(); i++) {
		if (word[i] >= 'A' && word[i] <= 'C') {
			time += 3;
		}
		else if (word[i] <= 'F') {
			time += 4;
		}
		else if (word[i] <= 'I') {
			time += 5;
		}
		else if (word[i] <= 'L') {
			time += 6;
		}
		else if (word[i] <= 'O') {
			time += 7;
		}
		else if (word[i] <= 'S') {
			time += 8;
		}
		else if (word[i] <= 'V') {
			time += 9;
		}
		else if (word[i] <= 'Z') {
			time += 10;
		}
	}
	 
	cout << time << endl;

}
