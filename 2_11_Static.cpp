#include<iostream>
using namespace std;

class Point {
    private:
        int x, y;
        static int count;   //静态数据成员声明，用于记录点的个数

    public:
        Point(int x = 0, int y = 0) {
            this->x = x;
            this->y = y;
            count++;
        }
        Point(Point &p) {    //复制构造函数
            x = p.x;
            y = p.y;
            count++;
        }
        /* 复制构造函数用于三种情形：
         * 1.定义一个对象时，以本类另一个对象作为初始值
         * Point a(10, 20);
         * Point b = a;
         * 
         * 2.传参
         * void fun1(Point p){
         *     cout << p.getX() << endl;
         * }
         * 调用语句: fun1(b);
         * 
         * 3.函数值返回
         * Point fun2(){
         *     return Point(1, 2);
         * }
         * 调用语句: b = fun2();
         */
        ~Point() { count--; }
        
        int getX() { return x; }
        int getY() { return y; }

        static void showCount() {   //静态函数成员
            cout << "   Object count = " << count << endl;
        }
};

int Point::count = 0;   //静态数据成员定义和初始化

int main() {            //主函数
    Point a(4, 5);      //定义对象a，其构造函数会使count增1
    cout << "Point A: " << a.getX() << ", " << a.getY();
    Point::showCount(); //输出对象个数

    Point b(a);         //定义对象b，其构造函数会使count增1
    cout << "Point B: " << b.getX() << ", " << b.getY();
    Point::showCount(); //输出对象个数

    return 0;
}