#include <iostream>

using namespace std;

int main() {
	int b[9];

	for (int i = 0; i < 9; i++) {
		cin >> b[i];
	}
	int max = -1;
	int index = -1;

	for (int i = 0; i < 9; i++) {
		if (b[i] > max) {
			max = b[i];
			index = i + 1;
		}
	}

	cout << max << "\n" << index;
}