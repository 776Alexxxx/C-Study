//指针递增
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

//指针递减
// #include <iostream>
// using namespace std;
// const int MAX = 3;
// int main()
// {
//     int var[MAX] = {10,100,200};
//     int *ptr;

//     //指针中最后一个元素的地址
//     ptr = &var[MAX-1];
//     for (int i = MAX;i > 0;i--)
//     {
//         cout << "Address of var[" << i << "] = ";
//         cout << ptr << endl;

//         cout << "Value of var[" << i << "] = ";
//         cout << *ptr << endl;

//         //移动到下一个地址
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

    //指针中第一个元素的地址
    ptr = var;
    int i = 0;
    while (ptr <= &var[MAX-1])
    {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;

        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;

        //指向上一个地址
        ptr++;
        i++;
    }
    return 0;
}