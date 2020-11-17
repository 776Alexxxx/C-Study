#include <iostream>
using namespace std;

//强制类型转换，其一般形式为：（类型说明符）（表达式）其功能是把表达式的运算结果强制转换成类型说明符所表示的类型。
int main()
{
    int a = 1;
    double b = 2.1;
    cout << "a + b = " << a + (int)b <<endl;//输出为3
}