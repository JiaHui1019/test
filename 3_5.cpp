#include <iostream>
using namespace std;

class Point {
private:
    float x, y;
public:
    Point() {
        x = y = 1;
    }
    Point(float x, float y) {
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
    ~Point() { }
    void display() {
        cout << "x=" << x << " y=" << y;
    }
};

class Rectangle: public Point {
private:
    float width, height;
public:
    Rectangle();
    Rectangle(float x, float y, float w, float h);
    ~Rectangle() {}
    float getHeight() {
        return height;
    }
    float getWidth() {
        return width;
    }
    void display();
};
Rectangle::Rectangle():Point(1, 1) {
    width = 1;
    height = 1;
}   //在这个函数中，红色部分如果省略，则自动调用无参构造函数
Rectangle::Rectangle(float x, float y, float w, float h):Point(x, y) {
    width = w;
    height = h;
}
void Rectangle::display() {
    Point::display();
    cout << " width=" << width << " height=" << height << endl;
}

int main(void) {
    Rectangle r1;
    r1.display();
    Rectangle r2(3, 3, 5, 6);
    r2.display();
    return 0;
}