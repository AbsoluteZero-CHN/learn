
#include <iostream>
using namespace std;

#define LENGTH 39UL;

// �ᰴ���������б���, �ı� LENGTH �Ƿ���, ��ı� PI ��ֵ
#if LENGTH
#define PI 3.141;
#else
#define PI 4.141;
#endif

#define MIN(a, b) (a < b ? a : b)

// ƴ���൱���滻��������
#define CONCAT(x, y) x ## y

void pre_compile() {
	cout << "Ԥ������: " << PI;

	cout << "��С��ֵ: " << MIN(1, 5) << endl;

	int xy = 100;
	cout << "ƴ������: " << CONCAT(x, y) << endl;

	cout << "��ǰ�к�:" << __LINE__ << endl;
	cout << "��ǰ�ļ���:" << __FILE__ << endl;
	cout << "��ǰ����:" << __DATE__ << endl;
	cout << "��ǰʱ��:" << __TIME__ << endl;
}