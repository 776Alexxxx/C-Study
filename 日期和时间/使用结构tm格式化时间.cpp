#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    //基于当前系统的日期/时间
    time_t now = time(0);

    cout << "1970到目前经过的秒数：" << now << endl;

    tm *ltm = localtime(&now);

    //输出tm结构的各个组成部分
    cout << "年：" << 1900 + ltm->tm_year << endl;
    cout << "月："  << 1 + ltm->tm_mon << endl;
    cout << "日：" << ltm->tm_mday << endl;
    cout << "时间：" << ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;
}