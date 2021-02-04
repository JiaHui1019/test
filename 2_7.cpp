#include <iostream>
using namespace std;

class Point {
    private:
        int x, y;
    
    public:
        Point() {
            this->x = 0;
            this->y = 0;
            cout << "Default Constructor called." << endl;
        }
        Point(int x, int y) {
            this->x = x;
            this->y = y;
            cout << "Constructor called." << endl;
        }
        ~Point() { cout << "Destructor called." << endl; }
        
        int getX() { return x; }
        int getY() { return y; }

        void move(int x, int y) {
            this->x = x;
            this->y = y;
        }
};

int main(void) {
    cout << "Step one: " << endl;
    Point *ptr1 = new Point;    //调用缺省构造函数
    delete ptr1;                //删除对象，自动调用析构函数

    cout << "Step two: " << endl;
    ptr1 = new Point(1, 2);
    delete ptr1;

    return 0;
}