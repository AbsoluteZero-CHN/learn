
#include <iostream>
using namespace std;

void lambda() {
	int a = 100;
	auto f1 = [a] {cout << a << endl; };
	f1();
	[a](int a) { cout << a << endl; }(a);

	// ֵ����
	a = 123;
	auto f2 = [a] {cout << a << endl; };
	a = 321;
	f2(); // ��� 123
	// ���ò���
	a = 123;
	auto f3 = [&a] { cout << a << endl; };
	a = 321;
	f3(); // ��� 321
}