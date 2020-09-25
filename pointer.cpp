
#include <iostream>

using namespace std;

void pointer() {
	int i;
	int* ip = &i;
	int* np = NULL;
	char c[10];
	cout << "变量 i 的地址: " << ip << endl;
	// 空指针指向地址为 0 的地址
	cout << "指针 np 的地址: " << np << endl;
	cout << "变量 c 的地址: " << &c << endl;
}