#include <iostream>
using namespace std;

class student
{
    private:
        int num;
        int score;
    public:
        void setdata()
        {
            cin >> num;
            cin >> score;
        }
    void display()
    {
        cout << "num=" << num << endl;
        cout << "score=" << score << endl;
    };
};
student stu1,stu2;

int main()
{
    stu1.setdata();
    stu2.setdata();
    stu1.display();
    stu2.display();
    return 0;
}