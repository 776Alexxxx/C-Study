#include <iostream>
using namespace std;

double getAverage(int *arr, int size); //��ʽ������һ��ָ�룺
double getAverage(int arr[5]); // ���غ�������ʽ������һ���Ѷ����С�����飺
double getAverage2(int arr[]); // �������أ���ʽ������һ��δ�����С�����飺

int main(int argc, char const *argv[])
{
    // ���� 5 ��Ԫ�ص���������
    int balance[5] = {1000, 2, 3, 17, 50};
    int *pt1 = balance;
    // �ֱ��������Ԫ�ظ������Լ�����ָ����ֽ���
    size_t balance_size = sizeof(balance) / sizeof(int);
    size_t pt1_size = sizeof(pt1);

    double avg, avg2, avg3;

    cout << "array size : " << balance_size << endl;
    cout << "pt1_size : " << pt1_size << endl;

    avg = getAverage(balance, 5);
    avg2 = getAverage(balance);
    avg3 = getAverage2(balance);

    // �������ֵ
    cout << "����1ƽ��ֵ�ǣ�" << avg << endl;
    cout << "����2ƽ��ֵ�ǣ�" << avg << endl;
    cout << "����3ƽ��ֵ�ǣ�" << avg << endl;
    return 0;
}

double getAverage(int *arr, int size)
{
    int i, sum = 0;
    double avg;
    // ��ӡ��һ���βε��ֽ���
    cout << "Inside getAverage sizeof(arr) = " << sizeof(arr) << endl;
    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }

    avg = double(sum) / size;
    return avg;
}

double getAverage(int arr[5])
{
    int i, sum = 0, size = 5;
    double avg;
    // ��ӡ��һ���βε��ֽ���
    cout << "Inside getAverage sizeof(arr) = " << sizeof(arr) << endl;
    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }

    avg = double(sum) / size;
    return avg;
}

double getAverage2(int arr[])
{
    int i, sum = 0, size = 5;
    double avg;
    // ��ӡ��һ���βε��ֽ���
    cout << "Inside getAverage sizeof(arr) = " << sizeof(arr) << endl;
    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }

    avg = double(sum) / size;
    return avg;
}