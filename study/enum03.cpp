#include <iostream>
using namespace std;

int main()
{
  //在定义枚举类型时对枚举元素赋值，此时，赋值的枚举值为所赋的值，而其他没有赋值的枚举值在为前一个枚举值加 1。
  enum Weekend{Zero,One,Two=555,Three,Four};
  int a,b,c,d,e;
  a=Zero;
  b=One;
  c=Two;
  d=Three;
  e=Four;
  cout<<a<<","<<b<<","<<c<<","<<d<<","<<e<<endl;
  return 0;
}