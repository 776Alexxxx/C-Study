#include <iostream>
#include <iomanip>

using namespace std;

void LE(int & a, int & b)

{

              int x=a;

              a=b;

              b=x;

       cout << setw(5)<<a

<< setw(5)<<b<<endl;

}

int main( )

{

              int x=10,y=25;

              LE(x,y);

              cout <<setw(5)<<x

                     << setw(5)<<y<<endl;

              return 0;

}