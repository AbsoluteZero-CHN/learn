
#include <iostream>
#include <ctime>

using namespace std;

void time() {
	// ��ǰϵͳʱ��
	time_t now = time(0);
	char* dt = ctime_s(&now);
	cout << "�������ں�ʱ��" << dt << endl;

	// �� now ת��Ϊ tm �ṹ
	tm* gmtm = gmtime_s(&now);
	dt = asctime_s(gmtm);
	cout << "UTC ���ں�ʱ�䣺" << dt << endl;
}