#include<iostream>
using namespace std;

int main() {
	int n = 0, x = 0,arr[10000];
	cin >> n;
	cin >> x;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] < x) {
			cout << arr[i];
			for (int j = i; j < n; j++) {
				if (arr[j] < x) {
					cout << " ";
					break;
				}else{
					break;
				}
			}
		}

	}
  return 0;
}
