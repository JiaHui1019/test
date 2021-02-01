#include<iostream>
using namespace std;

class Clock
{
    private:
        int hour, minute, second;
    public:
        void setTime(int newH = 0, int newM = 0, int newS = 0);
        void showTime();
};
/* 属性一般定义成private
 * 行为一般定义成public
 * 这样就实现了封装
 */
/* 成员函数的定义方法
 * 返回类型 类名::成员函数名(参数说明)
 * {
 *      函数体
 * }
 */
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
int main(void)
{
    Clock myClock;      //定义对象
    myClock.setTime(8, 30, 30); //通过“.”操作符实现对象成员函数的访问
    myClock.showTime();
    return 0; 
}