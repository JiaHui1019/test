#include <iostream>
using namespace std;

class Point {   //基类Point类的定义
private:
    float x, y;
public:
    void initPoint(float x = 0, float y = 0) {
        this->x = x;
        this->y = y;
    }
    void move(float offX, float offY) {
        x += offX;
        y += offY;
    }
    float getX() {
        return x;
    }
    float getY() {
        return y;
    }
};

class Rectangle: public Point { //派生类定义
private:
    float width, height;
public:
    void initRectangle(float x, float y, float w, float h) {
        initPoint(x, y);    //调用基类公有成员函数
        this->width = w;
        this->height = h;
    }
    float getHeight() {
        return height;
    }
    float getWidth() {
        return width;
    }
};

int main(void) {
    Rectangle obj;
    return 0;
}