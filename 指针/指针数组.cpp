// #include <iostream>
// using namespace std;
// const int MAX = 3;

// int main()
// {
//     int var[MAX] = {10,100,200};
//     int *ptr[MAX];

//     for (int i = 0;i < MAX;i++)
//     {
//         ptr[i] = &var[i];//��ֵΪ�����ĵ�ַ
//     }
//     for (int i = 0;i < MAX;i++)
//     {
//         cout << "Value of var[" << i << "] = ";
//         cout << *ptr[i] << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// const int MAX = 4;

// int main()
// {
//     const char *names[MAX] = { //����char���͵�ָ������
//         "Zara Ali",
//         "Hina Ali",
//         "Nuha Ali",
//         "Sara Ali",
//     };

//     for (int i = 0;i < MAX;i++)
//     {
//         cout << "Value of names[" << i << "] = ";
//         cout << names[i] << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

void pointerArray();
void pointerArray4Char();
const int MAX = 3;

int main(void){
    // pointerArray();
    pointerArray4Char();
    return 0;
}

void pointerArray(){
    int var[MAX] = {20,30,40};
    int *ptr[MAX];
    for(int i = 0; i < MAX; i++){
        ptr[i] = &var[i];//��ֵΪ�����ĵ�ַ
    }
    for(int i = 0; i < MAX; i++){
        cout << "Value of var[" << i << "] = ";
        cout << *ptr[i] <<endl;
    }
}

/**
 * ��һ��ָ���ַ���ָ���������洢һ���ַ����б�
 * Value of names[0] = sun;
 */
void pointerArray4Char(){
    const char *names[MAX] = {
            "sun","bin","sunbin"
    };
    for(int i = 0;i < MAX;i++){
        cout <<"Value of names[" << i << "] = ";//����ַ�����ֵ
        cout << names[i] << endl;
        cout <<"Value of *names[" << i << "] = ";//���ָ����ָ���ַ����׵�ַ��ֵ
        cout << *names[i] << endl;
        cout <<"Value of *names[" << i << "]+1 = ";//���ascii��ֵ
        cout << *names[i]+1 << endl;
        cout <<"Value of *(names[" << i << "]+1) = ";//���ָ����ָ���ַ����׵�ַ��һλ��ֵ
        cout << *(names[i]+1) << endl;
    }
}