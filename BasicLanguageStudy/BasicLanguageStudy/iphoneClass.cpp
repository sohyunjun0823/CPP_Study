#include <iostream>
#include <string>

using namespace std;

class iPhone {
public:
	//��� ���� : Ŭ���� ���ο��� ���ǵǾ� ���Ǵ� ����
	string name;
	bool existHomeButton;
	string color;
	int numberOfSeries;

	//��� �Լ� : Ŭ���� ���ο��� ���ǵǾ� ���Ǵ� �Լ�

	//������ : Ŭ������ ���� ��ü�� ������ �� �����ִ� �Լ� ����.

	iPhone() {
		name = "default";
		existHomeButton = false;
		color = "default";
		numberOfSeries = 0;
	}

	iPhone(string name, bool existHomeButton, string color, int numberOfSeries) {
		//this-> ~ : �ڱ� �ڽ� Ŭ������ ����� �����ϱ� ���� ����ϴ� ����.
		this->name = name;
		this->existHomeButton = existHomeButton;
		this->color = color;
		this->numberOfSeries = numberOfSeries;
	}


};

/*
* <�Լ�>
* ��ȯ���� �ڷ��� / �Լ��� / (�Լ� input�� - �Ű�����, ����, �Ķ����)
* {
*		code;
* }
*/

int addition(int n, int m) {
	int ret;
	ret = n + m;
	return ret;
}

int main() {
	iPhone i;
	cout << i.color << "\n" << i.name << "\n";
	iPhone i2("iPhone14", false, "Blue", 14);
	cout << i2.name << "\n" << i2.existHomeButton << "\n" << i2.color << "\n" << i2.numberOfSeries << "\n";




}