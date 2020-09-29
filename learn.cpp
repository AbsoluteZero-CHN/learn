// learn.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include <iostream>

#define LENGTH 39UL;
extern int header();
extern void lambda();
extern void string_test();
extern void pointer();
extern void base_iostream();
extern void struct_test();
extern void object();
extern void extends();
extern void operator_overloading();
extern void virtual_function();
extern void memory_alloc();
extern void pre_compile();
extern void function_pointer();
using namespace std;

enum color
{
    red, blue = 5, green
} c;

int main()
{
    header();
    lambda();
    string_test();
    pointer();
    // base_iostream();
    struct_test();
    object();
    extends();
    operator_overloading();
    virtual_function();
    memory_alloc();
    pre_compile();
    function_pointer();
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
