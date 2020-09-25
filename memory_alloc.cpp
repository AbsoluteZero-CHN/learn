
#include <iostream>

using namespace std;

void memory_alloc() {
	// 在堆上分配内存
	// int* 要理解 int 型的指针, 应该只是编译器有效, 用于校验
	int* array = new int[10];
	delete[] array;

	int** array_2 = new int* [10];
	for (int i = 0; i < 10; i++) {
		array_2[i] = new int[5];
	}

	// 释放二维数组
	for (int i = 0; i < 10; i++) {
		delete[] array_2[i];
	}
}