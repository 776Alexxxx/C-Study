#include <iostream>
using namespace std;

enum time {one,two,three} t;

int main()
{
  t = one;
  switch(t) {
      case one:
        cout << "one" << endl;
        break;
      case two:
        cout << "two" << endl;
        break;
      case three:
        cout << "three" << endl;
        break;
  }
  return 0;
}