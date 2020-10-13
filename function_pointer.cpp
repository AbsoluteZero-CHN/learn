
#include <iostream>

using namespace std;


const unsigned char code[] = "\xe9\x07\x00\x00\x00\xcc\xcc\xcc\xcc\xcc\xcc"\
							 "\xcc\x55\x8b\xec\x83\xec\x40\x53\x56\x57\x8d"\
							 "\x7d\xc0\xb9\x10\x00\x00\x00\xb8\xcc\xcc\xcc"\
							 "\xcc\xf3\xab\x8b\x45\x08\x83\xc0\x01\x5f\x5e"\
							 "\x5b\x8b\xe5\x5d\xc3";

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
	int result;
	int (*fun) (int);
	fun = (void*)code;
	result = fun(7);
	cout << "切换机器指令执行结果: " << result << endl;
}