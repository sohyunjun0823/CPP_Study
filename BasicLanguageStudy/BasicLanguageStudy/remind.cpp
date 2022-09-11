#include <iostream>
#include <string>

using namespace std;

class iPhone {
public:
	string name;
	bool existHomeButton;
	float screenSize;
	int launchYears;
	string color;
	int numberOfSeries;
	string option;

};

int main() {
	int a;
	cin >> a;
	cout << a << "\n";

	if (a == 0) {
		cout << "a is zero!\n";
	}
	else if (a != 0) {
		cout << "a is not zero!\n";
	}

	for (int i = 0; i < 10; i++) {
		cout << a++ << "\n";
	}

	
}