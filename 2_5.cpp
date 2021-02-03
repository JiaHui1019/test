#include<iostream>
using namespace std;

class Clock{
    private:
        int hour, minute, second;
    // 定义成私有的小时，分钟，秒只有在类的内部才可以访问
    public:
        Clock();    //声明无参构造函数
        Clock(int newH, int newM, int newS);    //声明构造函数
        
        //内联函数，设置属性的值
        void setHour(int hour){
            this->hour = hour;
        }
        void setMinute(int minute){
            this->minute = minute;
        }
        void setSecond(int second){
            this->second = second;
        }
        //获得属性的值
        int getHour(){
            return hour;
        }
        int getMinute(){
            return minute;
        }
        int getSecond(){
            return second;
        }
        
        void display(){
            cout << hour << ":" << minute << ":" <<second << endl;
        }
};

//定义无参构造函数，给hour,minute,second赋初值为1
Clock::Clock(): hour(1), minute(1), second(1){

}
//定义有参构造函数，给hour, minute, second赋初值为传入的参数值
Clock::Clock(int newH, int newM, int newS): hour(newH), minute(newM), second(newS){

}

/*定义无参构造函数的第二种等价写法：（推荐）
Clock::Clock(){
    this->hour = 1;
    this->minute = 1;
    this->second = 1;
}
*/

/*定义有参构造函数的第二种等价写法：（推荐）
Clock::Clock(int hour, int minute, int second){
    this->hour = hour;  //将传入的hour的值赋给hour属性（用this->hour表示）
    this->minute = minute;
    this->second = second;
}
*/

int main(void){
    Clock myClock1; //定义对象，此时会自动调用无参构造函数
    myClock1.setHour(5);
    cout << "利用无参构造函数创建的时间对象为：";
    myClock1.display();

    Clock myClock2(8, 3, 30);   //此时将自动调用有参构造函数
    cout << "利用有参构造函数创建的时间对象为：";
    myClock2.display();

    myClock2.setHour(21);
    cout << "修改过的对象的时间为：";
    myClock2.display();

    return 0;
}

//hour = myClock.getHour();
//myClock.setHour(5);
/* 数据域封装的优点：
 * 1.防止对封装数据的越权访问；
 * 2.限制私有特性改变时产生的连锁反应；
 * 3.保持数据的完整性；
 */