/*
* 
* input : n
* 
* output : n개의 층을 가진 삼각형
* 
* *
* **
* ***
* ****
* *****
* 
* *****
* ****
* ***
* **
* *
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
    
	for (int i = 1; i <= n; i++)
	{
		for (int y = 1; y <= i; y++)
		{
			cout << "@";
		}
		cout << "\n";
	}
}


