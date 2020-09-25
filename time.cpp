
#include <iostream>
#include <ctime>

using namespace std;

void time() {
	// 当前系统时间
	time_t now = time(0);
	char* dt = ctime_s(&now);
	cout << "本地日期和时间" << dt << endl;

	// 把 now 转换为 tm 结构
	tm* gmtm = gmtime_s(&now);
	dt = asctime_s(gmtm);
	cout << "UTC 日期和时间：" << dt << endl;
}