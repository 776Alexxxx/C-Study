// #include <iostream>
// #include <ctime>
// using namespace std;
// void getSeconds(unsigned long *ptr);

// int main()
// {
//     unsigned long sec;

//     getSeconds(&sec);

//     //���ʵ��ֵ
//     cout << "Number of seconds :" <<sec << endl;

//     return 0;
// }

// void getSeconds(unsigned long *ptr)
// {
//     //��ȡ��ǰ������
//     *ptr = time(NULL);
//     return;
// }

#include <iostream>
using namespace std;
 
// ��������
double getAverage(int *arr, int size);
 
int main ()
{
   // ���� 5 ��Ԫ�ص���������
   int balance[5] = {1000, 2, 3, 17, 50};
   double avg;
 
   // ����һ��ָ�������ָ����Ϊ����
   avg = getAverage( balance, 5 ) ;
 
   // �������ֵ
   cout << "Average value is: " << avg << endl; 
    
   return 0;
}
 
double getAverage(int *arr, int size)
{
  int    i, sum = 0;       
  double avg;          
 
  for (i = 0; i < size; ++i)
  {
    sum += arr[i];
   }
 
  avg = double(sum) / size;
 
  return avg;
}