#include <iostream>
#include <string>

using namespace std;

class Galaxy {
//접근 제어
public:
	//멤버 변수
	string name;
	string series;
	string color;
	double screenSize;
	int storageSize;

	//생성자(매개변수가 아무것도 없으면 기본 생성자)
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

	//멤버 함수
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