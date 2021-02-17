#include <iostream>
#include <cmath>
using namespace std;

class Shape {
private:
    string color;
public:
    Shape();
    Shape(string color);
    ~Shape();
    string getColor();
    void setColor(string color);
};
Shape::Shape() {
    color = "Black";
    cout << "Shape's default constructor called." << endl;
}
Shape::Shape(string color) {
    this->color = color;
    cout << "Shape's constructor called." << endl;
}
Shape::~Shape() {
    cout << "Shape's destructor called." << endl;
}
string Shape::getColor() {
    return color;
}
void Shape::setColor(string color) {
    this->color = color;
}

class Rectangle: public Shape {
private:
    double width, height;
public:
    Rectangle();
    Rectangle(string color, double width, double height);
    ~Rectangle();
    double getWidth();
    double getHeight();
    void setWidth(double width);
    void setHeight(double height);
    double getArea();
};
Rectangle::Rectangle():Shape() {
    width = height = 1.0;
    cout << "Rectangle's default constructor called." << endl;
}
Rectangle::Rectangle(string color, double width, double height):Shape(color) {
    this->width = width;
    this->height = height;
    cout << "Rectangle's constructor called." << endl;
}
Rectangle::~Rectangle() {
    cout << "Rectangle's destructor called." << endl;
}
double Rectangle::getWidth() {
    return width;
}
double Rectangle::getHeight() {
    return height;
}
void Rectangle::setWidth(double width) {
    this->width = width;
}
void Rectangle::setHeight(double height) {
    this->height = height;
}
double Rectangle::getArea() {
    return width * height;
}

class Circle: public Shape {
private:
    double radius;
    static double PI;
public:
    Circle();
    Circle(string color, double radius);
    ~Circle();
    double getRadius();
    void setRadius(double radius);
    double getArea();
};
double Circle::PI = 3.141593;
Circle::Circle():Shape() {
    radius = 1.0;
    cout << "Circle's default constructor called." << endl;
}
Circle::Circle(string color, double radius): Shape(color) {
    this->radius = radius;
    cout << "Circle's constructor called." << endl;
}
Circle::~Circle() {
    cout << "Circle's desconstructor called." << endl;
}
double Circle::getRadius() {
    return radius;
}
void Circle::setRadius(double radius) {
    this->radius = radius;
}
double Circle::getArea() {
    return PI * pow(radius, 2.0);
}

class RoundRectangle: public Rectangle {
private:
    double radius;
    static double PI;
public:
    RoundRectangle();
    RoundRectangle(string color, double width, double height, double radius);
    ~RoundRectangle();
    double getRadius();
    void setRadius(double radius);
    double getArea();
};
double RoundRectangle::PI = 3.141593;
RoundRectangle::RoundRectangle(): Rectangle() {
    radius = 1.0;
    cout << "RoundRectangle's default constructor called." << endl;
}
RoundRectangle::RoundRectangle(string color, double width, double height, double radius): Rectangle(color, width, height) {
    this->radius = radius;
    cout << "RoundRectangle's constructor called." << endl;
}
RoundRectangle::~RoundRectangle() {
    cout << "RoundRectangle's destructor called." << endl; 
}
double RoundRectangle::getRadius() {
    return radius;
}
void RoundRectangle::setRadius(double radius) {
    this->radius = radius;
}
double RoundRectangle::getArea() {
    return Rectangle::getArea() + PI * pow(radius, 2.0) - 4 * pow(radius, 2.0);
}

int main(void) {
    Shape s1;
    cout << s1.getColor() << endl;
    Shape s2("Red");
    cout << s2.getColor() << endl;
    Rectangle r1;
    cout << r1.getColor() << " " << r1.getArea() << endl;
    Rectangle r2("Red", 2.0, 2.0);
    cout << r2.getColor() << " " << r2.getArea() << endl;
    Circle c1;
    cout << c1.getColor() << " " << c1.getArea() << endl;
    Circle c2("Red", 2.0);
    cout << c2.getColor() << " " << c2.getArea() << endl;
    RoundRectangle rr1;
    cout << rr1.getColor() << " " << rr1.getArea() << endl;
    RoundRectangle rr2("Red", 4.0, 4.0, 2.0);
    cout << rr2.getColor() << " " << rr2.getArea() << endl;
    return 0;
}