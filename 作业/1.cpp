#include <iostream>
using namespace std;
class Complex

{

 public:

              Complex(){real=0;imag=0;cout<<"default constructor called!"<<endl;}

              ~Complex(){cout<<"destructor called!"<<endl;}

              Complex(Complex &c)

              {

                     real=c.real;

                     imag=c.imag;

                     cout<<"copy constructor called!"<<endl;

              }

              Complex(double r,double i)

              {

                     real=r;

                     imag=i;

                     cout<<"constructor called!"<<endl;

              }

              Complex(double d)

              {

                     real=d;

                     imag=0;

                     cout<<"transaction constructor called!"<<endl;

              }

              friend Complex operator+(const Complex &,const Complex &);

              void display();

 private:

              double real, imag;

};

void Complex::display()

{

              cout<<"("<<real<<","<<imag<<"i)"<<endl;

}

Complex operator+(const Complex &c1,const Complex &c2)

{

              Complex c;

              c.real=c1.real+c2.real;

              c.imag=c1.imag+c2.imag;

              return c;

}

int main()

{

              Complex c1(3,4),c2(5,-10),c3;

              double d=5; 

              c3=c1+c2;

              cout<<"c1+c2=";

              c3.display(); 

              c3=d+c1;

              cout<<"d+c1=";

              c3.display(); 

              c3=c2+d;

              cout<<"c2+d=";

              c3.display(); 

              return 0;

}