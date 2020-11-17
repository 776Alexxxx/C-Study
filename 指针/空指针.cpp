#include <iostream>
using namespace std;

int main(int argc,char const *argv[])
{
    int a = 3;
    int *p = &a;
    cout << p << '\t' << *p << endl;
    /*
    如果将指针 p 指向一个初始化好的变量 a 的内存地址，
    我们可以正常通过 p 和 *p 访问指针 p 存储的地址值和它指向的内存地址存储的值。
    如果我们将 NULL 赋值给指针 p，打印指针变量p存储的地址值发现为 0，
    而尝试打印指针变量 p 指向的内存地址（0）存储的值会得不到任何信息，
    因为程序不允许访问地址为 0 的内存。*/
    p = NULL;
    cout << p << '\t' << *p << endl;
    return 0;
}