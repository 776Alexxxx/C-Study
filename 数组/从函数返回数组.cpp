#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int * getRandom( )
{
    static int r[10];

    //设置种子
    srand((unsigned)time(NULL));
    for (int i = 0;i < 10;++i)
    {
        r[i] = rand();
        cout << r[i] <<endl;
    }

    return r;
}

//主函数
int main()
{
    //指向整数的指针
    int *p;

    p = getRandom();
    for (int i = 0;i < 10;i++)
    {
        cout << "*(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }

    return 0;
}