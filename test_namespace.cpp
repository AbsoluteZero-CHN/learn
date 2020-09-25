
#include <iostream>
using namespace std;

// 命名空间有点像包
namespace test_namespace {
	void test_function() {
		cout << "这里是测试输出方法" << endl;
	}

	namespace second_namespace {
		void test() {
			cout << "这里是第二层命名空间输出方法" << endl;
		}
	}
}