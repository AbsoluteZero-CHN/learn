
#include <iostream>

using namespace std;

void pointer() {
	int i;
	int* ip = &i;
	int* np = NULL;
	char c[10];
	cout << "���� i �ĵ�ַ: " << ip << endl;
	// ��ָ��ָ���ַΪ 0 �ĵ�ַ
	cout << "ָ�� np �ĵ�ַ: " << np << endl;
	cout << "���� c �ĵ�ַ: " << &c << endl;
}