
#include <iostream>
#include <cstring>

using namespace std;

void string_test() {
	char str1[11] = "Hello";
	char str2[11] = "World";
	char str3[11];
	int  len;

	// 复制 str1 到 str3
	strcpy_s(str3, str1);
	cout << "strcpy_s( str3, str1) : " << str3 << endl;

	// 连接 str1 和 str2
	strcat_s(str1, str2);
	cout << "strcat( str1, str2): " << str1 << endl;

	// 连接后，str1 的总长度
	len = strlen(str1);
	cout << "strlen(str1) : " << len << endl;
}