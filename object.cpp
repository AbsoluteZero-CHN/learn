
#include <iostream>

using namespace std;

class Box {
private:
	double length;
	double breadth;
	double hight;
public:
	double getLength() {
		return length;
	}
	void setLength(double length) {
		this->length = length;
	}
};

void object() {
	Box box_1;
	box_1.setLength(1.2);
	cout << "盒子长度为: " << box_1.getLength() << endl;
}