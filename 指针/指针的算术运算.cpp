//ָ�����
// #include <iostream>
// using namespace std;
// const int MAX = 3;

// int main()
// {
//     int var[MAX] = {10,100,200};
//     int *ptr;

//     ptr = var;
//     for (int i = 0;i < MAX;i++)
//     {
//         cout << "Address of var[" << i << "] = ";
//         cout << ptr << endl;

//         cout << "Value of var[" << i << "] = ";
//         cout << *ptr << endl;

//         ptr++;
//     }
//     return 0;
// }

//ָ��ݼ�
// #include <iostream>
// using namespace std;
// const int MAX = 3;
// int main()
// {
//     int var[MAX] = {10,100,200};
//     int *ptr;

//     //ָ�������һ��Ԫ�صĵ�ַ
//     ptr = &var[MAX-1];
//     for (int i = MAX;i > 0;i--)
//     {
//         cout << "Address of var[" << i << "] = ";
//         cout << ptr << endl;

//         cout << "Value of var[" << i << "] = ";
//         cout << *ptr << endl;

//         //�ƶ�����һ����ַ
//         ptr--;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
const int MAX = 3;
int main()
{
    int var[MAX] = {10,100,200};
    int *ptr;

    //ָ���е�һ��Ԫ�صĵ�ַ
    ptr = var;
    int i = 0;
    while (ptr <= &var[MAX-1])
    {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;

        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;

        //ָ����һ����ַ
        ptr++;
        i++;
    }
    return 0;
}