#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int y = n; y >= i; y--)
		{
			cout << "*";
		}

		cout << "\n";
	}
}