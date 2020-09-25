
#include <iostream>

using namespace std;

class Father {
protected:
	int height;
	int weight;
public:
	int getHeight() {
		return height;
	}
	void setHight(int height) {
		this->height = height;
	}
};


class Child: public Father {
public:
	int getHeight() {
		return __super::getHeight();
	}
	void setHight(int height) {
		__super::height = height + 2;
	}

	Child(int height = 0, int weight = 0) {

	}
};

void extends() {
	Child child;
	child.setHight(10);
	cout << "Child.height: " << child.getHeight() << endl;
}