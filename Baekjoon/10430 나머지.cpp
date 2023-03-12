#include<iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;

	int b;
	cin >> b;

	int c;
	cin >> c;

	cout << (a + b) % c << "\n";

	cout << ((a % c) + (b % c)) % c << "\n";

	cout << (a * b) % c << "\n";

	cout << ((a % c) * (b % c)) % c << "\n";
}