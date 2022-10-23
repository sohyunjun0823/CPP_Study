#include<iostream>
#include<string>

using namespace std;

class iphone {
public:
	string name;
	string series;
	int size;
	double storageSize;
	string color;

	iphone() {
		name = "";
		series = "";
		size = 0;
		storageSize = 0;
		color = "";
	}

	iphone(string _name, string _series) {

	}

	iphone(string _name, string _series, int _size, double _storagesize, string _color) {
		name = _name;
		series = _series;
		size = _size;
		storageSize = _storagesize;
		color = _color;
	}

	void to_string() {

		cout << "name : " << name
			<< "\nseries : " << series
			<< "\nsize : " << size
			<< "\nstorageSize : " << storageSize
			<< "\ncolor : " << color
			<< "\n";
	}


};

int main() {
	iphone hyunjunPhone("pro", "11", 7.6, 256, "black");
	hyunjunPhone.to_string();

	iphone phones[5];

	int option;
	cout << "�ɼ��� �Է��ϼ���.";
	cin >> option;

	for (int i = 0; i < 5; i++) {

		if (option == 1)
		{
			string name, series, color;
			double size;
			int storageSize;
			iphone phone;
			cout << "���� :";
			cin >> name;

			cout << "�ø��� :";
			cin >> series;
			
			cout << "������ :";
		
			cin >> size;

			cout << "������� :";
			cin >> storageSize;

			cout << "���� :";
			cin >> color;

			iphone tempPhone(name, series, size, storageSize, color);
			phones[i] = tempPhone;

		}
		else if (option == 2)
		{
			string name, series;
			cout << "���� :";
			cin >> name;

			cout << "�ø��� :";
			cin >> series;

			iphone tempPhone(name, series);
			phones[i] = tempPhone;


		}
	}


}

/*
*
*

�ɼ� (1. ������ ���� ������ �Է��� �� �ְ� �Ѵ�. / 2. �ø���� ������ �Է��ϸ� ����, �ø���, ������(5), �������(128), ����(Sil
�ɼ��� �����ϼ���. (1 / 2) :

�Է�
------------------------
<�޴���>
���� :
�ø��� :
������ :
���� ���� :
����:
-------------------------
�Է�
<�޴���>
���� :
�ø��� :
-----------------------




���


������ �޴��� ����Ʈ�Դϴ�.

1. ����
�ø���
������
�������
����

--------------
2. ����
�ø���
������
�������
����
...
5
*/