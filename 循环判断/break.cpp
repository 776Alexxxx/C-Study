#include <iostream>
using namespace std;

int main()
{
    //�ֲ���������
    int a = 10;

    //doѭ��ִ��
    do
    {
        cout << "a��ֵ��" << a << endl;
        a = a + 1;
        if (a > 15)
        {
            /* code */
            break;
        }
    } while (a < 20);
    
    return 0;
}