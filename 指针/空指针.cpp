#include <iostream>
using namespace std;

int main(int argc,char const *argv[])
{
    int a = 3;
    int *p = &a;
    cout << p << '\t' << *p << endl;
    /*
    �����ָ�� p ָ��һ����ʼ���õı��� a ���ڴ��ַ��
    ���ǿ�������ͨ�� p �� *p ����ָ�� p �洢�ĵ�ֵַ����ָ����ڴ��ַ�洢��ֵ��
    ������ǽ� NULL ��ֵ��ָ�� p����ӡָ�����p�洢�ĵ�ֵַ����Ϊ 0��
    �����Դ�ӡָ����� p ָ����ڴ��ַ��0���洢��ֵ��ò����κ���Ϣ��
    ��Ϊ����������ʵ�ַΪ 0 ���ڴ档*/
    p = NULL;
    cout << p << '\t' << *p << endl;
    return 0;
}