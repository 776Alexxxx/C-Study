#include <iostream>
using namespace std;

void swap(int& x,int& y);

int main()
{
    //局部变量声明
    int a = 100;
    int b = 200;

    cout << "交换前a的值：" << a << endl;
    cout << "交换前b的值：" << b << endl;

    /* 调用函数来交换值 */
    swap(a,b);

    cout << "交换后a的值：" << a << endl;
    cout << "交换后b的值：" << b << endl;

    return 0;
}

//函数定义
void swap(int& x,int& y)
{
    int temp;
    temp = x;//保存地址x的值
    x = y;//把y赋值给x
    y = temp;//把x赋值给y

    return;
}