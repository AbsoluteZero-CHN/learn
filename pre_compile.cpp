
#include <iostream>
using namespace std;

#define LENGTH 39UL;

// 会按照条件进行编译, 改变 LENGTH 是否定义, 会改变 PI 的值
#if LENGTH
#define PI 3.141;
#else
#define PI 4.141;
#endif

#define MIN(a, b) (a < b ? a : b)

// 拼接相当于替换里面的语句
#define CONCAT(x, y) x ## y

void pre_compile() {
	cout << "预编译结果: " << PI;

	cout << "较小的值: " << MIN(1, 5) << endl;

	int xy = 100;
	cout << "拼接起来: " << CONCAT(x, y) << endl;

	cout << "当前行号:" << __LINE__ << endl;
	cout << "当前文件名:" << __FILE__ << endl;
	cout << "当前日期:" << __DATE__ << endl;
	cout << "当前时间:" << __TIME__ << endl;
}