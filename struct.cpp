
#include <iostream>
#include <cstring>

using namespace std;

struct Book {
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

void struct_test() {
	struct Book book_1;
	char title[50] = { 'C', '+', '+', ' ', '教', '程' };
	strcpy_s(book_1.title, "C++ 教程");
	book_1.book_id = 111;
	Book* book_2 = &book_1;
	cout << "book_1.title: " << book_1.title << endl;
	strcpy_s(book_1.title, "新书");
	cout << "book_2.title: " << book_2 -> title << endl;
}