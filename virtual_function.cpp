

#include <iostream>
#include <cstring>

using namespace std;



class Father {
protected:
	char sex[3];
public:
	virtual void setSex() = 0;
};

class Daughter: public Father {
public:
	void setSex() {
		strcpy_s(this->sex, "Ů");
	}
};
class Son: public Father {
public:
	void setSex() {
		strcpy_s(this->sex, "��");
	}
	auto getSex() {
		return this->sex;
	}
};

void  init(Father* father) {
	father->setSex();
}

void virtual_function() {
	Son son;
	Father* father;
	father = &son;
	init(father);
	cout << "�Ա�: " << son.getSex() << endl;
}