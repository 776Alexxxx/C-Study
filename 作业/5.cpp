#include <iostream>

using namespace std;

class Test

{

 public:

         Test() { cnt++; }

         ~Test() {cnt--; }

         static int Count() { return cnt;}

 private:

         static int cnt;

};

int Test::cnt = 0;

int main()

{

         cout << Test::Count() <<' ';

         Test t1, t2;

         Test* pT3 = new Test;

         Test* pT4 = new Test;

         cout << Test::Count() <<' ';

         delete pT4;

         delete pT3;

         cout << Test::Count() << endl;

         return 0;

}