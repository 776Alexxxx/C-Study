#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    //���ڵ�ǰϵͳ�ĵ�ǰ����/ʱ��
    time_t now = time(0);

    //��nowת�����ַ�����ʽ
    char* dt = ctime(&now);

    cout << "�������ں�ʱ�䣺" << dt << endl;

    //��nowת��Ϊtm�ṹ
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC���ں�ʱ�䣺" << dt << endl;
}