#include <iostream>

using namespace std;

void base_iostream() {
	char name[50];
	int age;
	cout << "������: " << endl;
	cin >> name >> age;
	clog << "�û�������!" << endl;
	cout << "����� name: " << name << endl;
	cout << "����� age: " << age << endl;

	if (age > 100) {
		cerr << "���䲻�ô��� 100, ��ǰ����: " << age << endl;
	}
}