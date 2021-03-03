#include <iostream>
#include <string>
using namespace std;
#define Day 7  //define 宏常量

int main()
{
    cout << "hello world" << endl;

    int a = 5;
    cout << a << endl;

    const int month = 12;  // const修饰的常量
    cout << "一年有" << month << "月, 每周有" << Day << "天" << endl;

    string name = "wmh";
    long long age = 18;
    cout << name << "今年" << age << "岁了" << endl;

    short b = 10;
    long c = 12;

    cout << "int类型大小：" << sizeof(a) << endl;
    cout << "short类型大小：" << sizeof(b) << endl;
    cout << "long类型大小：" << sizeof(c) << endl;
    cout << "string类型：" << sizeof(name) << endl;

    

    return 0;
}