// cpp_const.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

void fun(const int& a, const int& b);
void fun1(int& a, int& b);

int main()
{
    const int x = 3;
    int y = 3;
    int const* p = &y;
    const int* p1 = &y;
    y = 5;
    int z = 5;
    int* const p2 = &z;
    *p2 = 10;
    cout << z << endl;
    int const* p3 = &z;
    cout << *p3 << endl;
    p3 = &y;
    cout << *p3 << endl;

    int x1 = 3;
    int y1 = 5;
    int const& z1 = x;
    fun(x1, y1);
    fun1(x1, y1);
    cout << x1 << "\t" << y1 << endl;
    system("pause");
}
void fun(const int& a, const int& b)
{
   
}
void fun1(int& a, int& b)
{
    a = 10;
    b = 20;
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
