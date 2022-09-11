#include <iostream>
#include <string>

using namespace std;

class Galaxy {
public:
	string name;
	int numberOfseries;
	string color;
	bool foldable;

	Galaxy(){
		name = "default";
		numberOfseries = 0;
		color = "default";
		foldable = false;
	}
	
	Galaxy(string name, int numberOfseries, string color, bool foldable) {
		this->name = name;
		this->numberOfseries = numberOfseries;
		this->color = color;
		this->foldable = foldable;
	}

	//void : �ڷ����� ���� ���� �ǹ� : return���� ���� ���� �ִٴ� ��.
	void printInfomation() {
		cout << this->name << "\n" << this->numberOfseries << "\n" << this->color << "\n" << this->foldable << "\n";
	}


	
};

int main() {
	Galaxy g;
	g.printInfomation();

	Galaxy g2("Galaxy Fold", 4, "Black", true);
	g2.printInfomation();
}