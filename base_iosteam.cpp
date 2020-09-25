#include <iostream>

using namespace std;

void base_iostream() {
	char name[50];
	int age;
	cout << "请输入: " << endl;
	cin >> name >> age;
	clog << "用户已输入!" << endl;
	cout << "输入的 name: " << name << endl;
	cout << "输入的 age: " << age << endl;

	if (age > 100) {
		cerr << "年龄不得大于 100, 当前输入: " << age << endl;
	}
}