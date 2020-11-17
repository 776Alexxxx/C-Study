#include <iostream>
using namespace std;

int main()
{
    //const type variable = value;
    //定义成 const 后的常量，程序对其中只能读不能修改。
    const int LENGTH=10;
    const int WIDTH=5;
    const char NEWLINE='\n';

    int area;  
   
    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;
    return 0;
}