#include <iostream>

using namespace std;

int a;
int b[1000000];

int main() {
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b[i];
	}
	int min = 1000001;
	int max = -1000001;

	for (int i = 0; i < a; i++) {
		if (b[i] < min) {
			min = b[i];
		}
		if (b[i] > max) {
			max = b[i];
		}
	}

	cout << min << " " << max;
}

