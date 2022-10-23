#include <iostream>
#include <string>

using namespace std;

class Galaxy {
//���� ����
public:
	//��� ����
	string name;
	string series;
	string color;
	double screenSize;
	int storageSize;

	//������(�Ű������� �ƹ��͵� ������ �⺻ ������)
	Galaxy() {
		name = "";
		series = "";
		color = "";
		screenSize = 0;
		storageSize = 0;
	}

	Galaxy(string _name, string _series, string _color, double _screenSize, int _storageSize) {
		name = _name;
		series = _series;
		color = _color;
		screenSize = _screenSize;
		storageSize = _storageSize;
	}

	//��� �Լ�
	void to_string() {
		cout << "name : " << name
			<< "\nseries : " << series
			<< "\ncolor : " << color
			<< "\nscreenSize : " << screenSize
			<< "\nstorageSize : " << storageSize
			<< "\n";
	}



};

int main() {
	Galaxy hyunjunPhone("Galaxy S 20", "20", "Bronze", 7.9, 256);
	hyunjunPhone.to_string();
	

}