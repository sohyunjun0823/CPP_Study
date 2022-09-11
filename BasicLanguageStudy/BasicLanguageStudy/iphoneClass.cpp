#include <iostream>
#include <string>

using namespace std;

class iPhone {
public:
	//멤버 변수 : 클래스 내부에서 정의되어 사용되는 변수
	string name;
	bool existHomeButton;
	string color;
	int numberOfSeries;

	//멤버 함수 : 클래스 내부에서 정의되어 사용되는 함수

	//생성자 : 클래스를 통해 객체를 생성할 때 도와주는 함수 개념.

	iPhone() {
		name = "default";
		existHomeButton = false;
		color = "default";
		numberOfSeries = 0;
	}

	iPhone(string name, bool existHomeButton, string color, int numberOfSeries) {
		//this-> ~ : 자기 자신 클래스의 멤버에 접근하기 위해 사용하는 문법.
		this->name = name;
		this->existHomeButton = existHomeButton;
		this->color = color;
		this->numberOfSeries = numberOfSeries;
	}


};

/*
* <함수>
* 반환값의 자료형 / 함수명 / (함수 input값 - 매개변수, 인자, 파라미터)
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