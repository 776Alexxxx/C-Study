// #include <iostream>
// using namespace std;

// int main()
// {
//     int var;
//     int *ptr;
//     int **pptr;

//     var = 3000;

//     //��ȡvar�ĵ�ַ
//     ptr = &var;

//     //ʹ�������&��ȡptr�ĵ�ַ
//     pptr = &ptr;

//     //ʹ��pptr��ȡֵ
//     cout << "var��ֵΪ��" << var << endl;
//     cout << "*ptr��ֵΪ��" << *ptr << endl;
//     cout << "**pptr��ֵΪ��" << **pptr << endl;

//     return 0;
// }

#include <iostream>
 
using namespace std;

int main ()
{
    int var;
    int *ptr;
    int **pptr;
    var = 3000;

    // ��ȡ var �ĵ�ַ
    ptr = &var;

    // ʹ������� & ��ȡ ptr �ĵ�ַ
    pptr = &ptr;

    // ʹ�� pptr ��ȡֵ
    cout << "var ֵΪ :" << var << endl;
    cout << "*ptr ֵΪ:" << *ptr << endl;
    cout << "**pptr ֵΪ:" << **pptr << endl;
    cout << "var ��ַΪ :" << &var << endl;
    cout << "ptr=&var ֵΪvar�ĵ�ַ:" << ptr << endl;
    cout << "ptr��ַΪ:" << &ptr << endl;
    cout << "*pptr=ptr=&var  ֵΪvar�ĵ�ַ:" << *pptr << endl;
    cout << "pptr ��ַΪ:" << &pptr << endl;
    return 0;
}