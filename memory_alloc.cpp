
#include <iostream>

using namespace std;

void memory_alloc() {
	// �ڶ��Ϸ����ڴ�
	// int* Ҫ��� int �͵�ָ��, Ӧ��ֻ�Ǳ�������Ч, ����У��
	int* array = new int[10];
	delete[] array;

	int** array_2 = new int* [10];
	for (int i = 0; i < 10; i++) {
		array_2[i] = new int[5];
	}

	// �ͷŶ�ά����
	for (int i = 0; i < 10; i++) {
		delete[] array_2[i];
	}
}