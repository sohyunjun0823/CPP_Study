/*


input : n

output : 2n - 1���� ���� ������ �ִ� �𷡽ð��� �����


*****
-***
--*
  
+***
*****





*/

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
			cout << "-";
		}
		for (int y = 2 * n - 1 ; y <= i; y++)
		{
			cout << "+";
		}
		for (int x = n; x <= i; x++)
		{
			cout << "=";
		}
		for (int x = 2 * n-1; x >= i; x--)
		{
			cout << "@";
		}
		cout << "\n";
	}
}