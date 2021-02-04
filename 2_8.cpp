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
    Point *ptr = new Point[2];      //创建对象数组  
    //cout << ptr[1].getX() << " " << ptr[1].getY() << endl;
    ptr[0].move(5, 10);     //通过指针访问数组元素的成员
    ptr[1].move(15, 20);    //通过指针访问数组元素的成员
    cout << "Deleting..." << endl;
    delete[] ptr;           //删除整个对象数组
    
    return 0;
}