#include <iostream>
#include <ctime>
#include <cstdlib>
#define MAX 10 
using namespace std;
 
int main ()
{
   int number[MAX] = {0};
   int i;
 
   // 设置种子
   srand( (unsigned)time( NULL ) );
 
   /* 生成 10 个随机数 */
   for( i = 0; i < MAX; i++ )
   {
      // 生成实际的随机数
      number[i] = rand() % 100; //产生100以内的随机数
      printf("%d ",number[i]);
   }
   printf("\n");
 
   return 0;
}