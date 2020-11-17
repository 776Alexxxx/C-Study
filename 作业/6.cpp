#include <iostream>

using namespace std;

class X

{

public:

         X (int m,int n,int d):p(d) { x=m; y=n; }

         void display();

         void display() const;

private:

         int x, y;

         const int p;

};

void X::display()

{

         cout<<x<<","<<y<<endl;

         cout<<"p="<<p<<endl;

}

void X::display() const

{

         cout<<x<<","<<y<<" in const"

                     <<endl;

         cout<<"p="<<p<<" in const"

                     <<endl;

}

int main()

{

         X a(1.2,3.4,5.6);

         a.display();

         const X b(2.5,8.9,3.14);

         b.display();

         return 0;

}