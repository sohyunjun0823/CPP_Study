#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int c;

	cin >> c;
	for (int i = 0; i < c; i++) {
		int n;
		double a[1000];
		double sum = 0;
		double avg;
		double count = 0;

		cin >> n;
		for (int j = 0; j < n; j++) {

			cin >> a[j];
			sum += a[j];	//sum = sum + a[j];
		}
		avg = sum / n;
		for (int j = 0; j < n; j++) {
			if (avg < a[j]) {
				count = count + 1;	//count += 1; count++;
			}
		}
		cout << fixed << setprecision(3) << (count / n) * 100 << "%\n";
	}
}