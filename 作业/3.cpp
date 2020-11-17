#include <iostream >

using namespace std;

void fun1(int a, int b)

{

              int c;

              c=a;      

              a=b;

              b=c;

       }

void fun2(int *a, int *b)

{

              int c;

              c=*a;

            *a =*b;

              *b=c;

}

void fun3(int &a, int b)

{

              int c;

              c=a;

              a = b;

              b=c;

}

int main()

{

              int x,y;

              x=1;

              y=2;

              fun1(x,y);

              cout<<x<<y<<',';

              x=1;

              y=2;

              fun2(&x,&y);

              cout<<x<<y<<',';

              x=1;

      y=2;

      fun3(x,y);

              cout<<x<<y<<endl;

              return 0;

}