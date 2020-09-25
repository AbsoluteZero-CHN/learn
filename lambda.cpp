
#include <iostream>
using namespace std;

void lambda() {
	int a = 100;
	auto f1 = [a] {cout << a << endl; };
	f1();
	[a](int a) { cout << a << endl; }(a);

	// 值捕获
	a = 123;
	auto f2 = [a] {cout << a << endl; };
	a = 321;
	f2(); // 输出 123
	// 引用捕获
	a = 123;
	auto f3 = [&a] { cout << a << endl; };
	a = 321;
	f3(); // 输出 321
}