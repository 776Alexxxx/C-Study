#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    //���ڵ�ǰϵͳ������/ʱ��
    time_t now = time(0);

    cout << "1970��Ŀǰ������������" << now << endl;

    tm *ltm = localtime(&now);

    //���tm�ṹ�ĸ�����ɲ���
    cout << "�꣺" << 1900 + ltm->tm_year << endl;
    cout << "�£�"  << 1 + ltm->tm_mon << endl;
    cout << "�գ�" << ltm->tm_mday << endl;
    cout << "ʱ�䣺" << ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;
}