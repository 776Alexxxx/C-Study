#include <iostream>
#include <ctime>
#include <cstdlib>
#define MAX 10 
using namespace std;
 
int main ()
{
   int number[MAX] = {0};
   int i;
 
   // ��������
   srand( (unsigned)time( NULL ) );
 
   /* ���� 10 ������� */
   for( i = 0; i < MAX; i++ )
   {
      // ����ʵ�ʵ������
      number[i] = rand() % 100; //����100���ڵ������
      printf("%d ",number[i]);
   }
   printf("\n");
 
   return 0;
}