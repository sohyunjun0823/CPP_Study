#include <iostream>;
using namespace std;

int main() {
	int a[10];
	bool cnt[42] = { false };
	int count = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < 10; i++) {
		cnt[a[i] % 42] = true;
	}

	for (int i = 0; i < 42; i++) {
		if (cnt[i]) {
			count++;
		}
	}

	cout << count;
}