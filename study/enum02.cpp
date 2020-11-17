#include <iostream>
using namespace std;

int main()
{
    enum rank
    {
        first,second,third
    };

    int nRank = 0;
    switch (nRank) {
        case first:
            cout << "first";
            break;
        case second:
            cout << "second";
            break;
        case third:
            cout << "third";
            break;
    }
    return 0;
}