
#include <iostream>
using namespace std;

// �����ռ��е����
namespace test_namespace {
	void test_function() {
		cout << "�����ǲ����������" << endl;
	}

	namespace second_namespace {
		void test() {
			cout << "�����ǵڶ��������ռ��������" << endl;
		}
	}
}