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
	cout << "옵션을 입력하세요.";
	cin >> option;

	for (int i = 0; i < 5; i++) {

		if (option == 1)
		{
			string name, series, color;
			double size;
			int storageSize;
			iphone phone;
			cout << "기종 :";
			cin >> name;

			cout << "시리즈 :";
			cin >> series;
			
			cout << "사이즈 :";
		
			cin >> size;

			cout << "저장공간 :";
			cin >> storageSize;

			cout << "색상 :";
			cin >> color;

			iphone tempPhone(name, series, size, storageSize, color);
			phones[i] = tempPhone;

		}
		else if (option == 2)
		{
			string name, series;
			cout << "기종 :";
			cin >> name;

			cout << "시리즈 :";
			cin >> series;

			iphone tempPhone(name, series);
			phones[i] = tempPhone;


		}
	}


}

/*
*
*

옵션 (1. 본인이 직접 정보를 입력할 수 있게 한다. / 2. 시리즈와 기종만 입력하면 기종, 시리즈, 사이즈(5), 저장공간(128), 색상(Sil
옵션을 선택하세요. (1 / 2) :

입력
------------------------
<휴대폰>
기종 :
시리즈 :
사이즈 :
저장 공간 :
색상:
-------------------------
입력
<휴대폰>
기종 :
시리즈 :
-----------------------




출력


선택한 휴대폰 리스트입니다.

1. 기종
시리즈
사이즈
저장공간
색상

--------------
2. 기종
시리즈
사이즈
저장공간
색상
...
5
*/