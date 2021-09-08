#include<iostream>
using namespace std;

int main() {
	int arr[9] = {}, i = 0, max = 0;


	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 9; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	while(max!=arr[i]){
		i++;
	}
	cout << max << "\n" << i+1;
}
