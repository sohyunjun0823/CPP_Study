/*
input : n


output : n���� ���� ���� ���ﰢ��
 +++*
 ++***
 +*****
 ******* 

*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

  for (int i = 1; i <= n; i++)
  {
      for (int y = n; y > i; y--)
      {
          cout << " ";
      }
      for (int y = 1; y <= 2 * i - 1; y++)
      {
          cout << "*";
      }
      cout << "\n";
  }
}