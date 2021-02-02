#include<iostream>
using namespace std;

class Clock
{
    private:
        int hour, minute, second;
    public:
        Clock(int newH, int newM, int newS);    //声明构造函数
        void setTime(int newH = 0, int newM = 0, int newS = 0);
        void showTime();
};
void Clock::setTime(int newH, int newM, int newS)
{
    hour = newH;
    minute = newM;
    second = newS;
}
void Clock::showTime()
{
    cout << hour << ":" << minute << ":" << second;
}
//构造函数的实现:M
Clock::Clock(int newH, int newM, int newS):hour(newH), minute(newM), second(newS)
{
}
//建立对象时构造函数的作用:
int main(void)
{
    Clock c(0, 0, 0);   //创建一个Clock对象c，自动调用构造函数
    c.showTime();
    return 0; 
}
/* 调用时可以不需要参数的构造函数都是默认构造函数
 * 1.当不定义构造函数时，编译器自动产生默认构造函数
 * 2.在类中可以自定义无参数的构造函数，也是默认构造函数
 * 3.全部参数都有默认形参值的构造函数也是默认构造函数
 * 下面两个都是默认构造函数，如果在类中同时出现，将产生编译错误：
 * Clock();
 * Clock(int newH = 0, int newM = 0, int newS = 0);
 */