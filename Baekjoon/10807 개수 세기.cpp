#include<iostream>;
using namespace std;

int main() {
	int arr[101];
	int n;
	int v;
	int count = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cin >> v;
	for (int i = 0; i < n; i++) {


		if (v == arr[i]) {
			count = count + 1;
		}
	}
	cout << count;
}