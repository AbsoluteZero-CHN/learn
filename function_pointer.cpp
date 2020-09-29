
#include <iostream>

using namespace std;


const unsigned char code[] = "\xe9";

void test(int* ap) {
	*ap = *ap + 2;
}

void function_pointer() {
	void (*fp)(int* a);
	fp = test;
	int a = 2;
	int* ap = &a;
	fp(ap);
	cout << "执行函数指针结果: " << a << endl;
}