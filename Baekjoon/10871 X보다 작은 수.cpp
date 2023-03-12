#include<iostream>;
using namespace std;

int main() {
	int n;
	int a[10001];
	int x;
	int count = 0;


	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}


	for (int i = 0; i < n; i++) {
		if (x > a[i]) {
			cout << a[i] << " ";
		}
	}
}