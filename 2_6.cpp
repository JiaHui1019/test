#include<iostream>
using namespace std;

class Clock {
    private:
        int hour, minute, second;
    
    public:
        Clock();
        Clock(int hour, int minute, int second);
        ~Clock();

        void setHour(int hour) {
            this->hour = hour;
        }
        void setMinute(int minute) {
            this->minute = minute;
        }
        void setSecond(int second) {
            this->second = second;
        }

        int getHour() {
            return hour;
        }
        int getMinute() {
            return minute;
        }
        int getSecond() {
            return second;
        }

        void display() {
            cout << hour << ":" << minute << ":" << second << ":" <<endl;
        }
};

Clock::Clock() {
    this->hour = 1;
    this->minute = 1;
    this->second = 1;
}
Clock::Clock(int hour, int minute, int second) {
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}
Clock::~Clock() { }

int main(void) {
    Clock c(8, 3, 10);              //定义并初始化对象c
    Clock *ptr = &c;                //定义对象指针，用c的地址将其初始化
    cout << ptr->getHour() << endl; //利用指针访问对象成员
    cout << c.getHour() << endl;    //利用对象名访问对象成员
    return 0;
}