#include <string>
#include <iostream>
using namespace std;

class Shape {
private:
    string color;
public:
    Shape();
    Shape(string c);
    ~Shape();
    string getColor();
    void setColor(string c);
    double getArea();
    void display();
};
Shape::Shape() {
    color = "white";
    cout << "Shape default Constructor called." << endl;
}
Shape::Shape(string c) {
    color = c;
    cout << "Shape constructor called." << endl;
}
Shape::~Shape() {
    cout << "Shape default destructor called." << endl;
}
string Shape::getColor() {
    return color;
}
void Shape::setColor(string c) {
    color = c;
}
double Shape::getArea() {
    return 0;
}
void Shape::display() {
    cout << "[Shape Object] color=" << getColor() << " area=" << getArea() << endl;
}

class Rectangle:public Shape {
private:
    double width, height;
public:
    Rectangle();
    Rectangle(string c, double w, double h);
    ~Rectangle();
    void setWidth(double w);
    void setHeight(double h);
    double getWidth();
    double getHeight();
    double getArea();
    void display();
};
Rectangle::Rectangle() {
    width = height = 1.0;
    cout << "Rectangle default Constructor called." << endl;
}
Rectangle::Rectangle(string c, double w, double h):Shape(c) {
    width = w;
    height = h;
    cout << "Rectangle constructor called." << endl;
}
Rectangle::~Rectangle() {
    cout << "Rectangle destructor called." << endl;
}
void Rectangle::setWidth(double w) {
    width = w;
}
void Rectangle::setHeight(double h) {
    height = h;
}
double Rectangle::getWidth() {
    return width;
}
double Rectangle::getHeight() {
    return height;
}
double Rectangle::getArea() {
    return width * height;
}
void Rectangle::display() {
    cout << "[Rectangle Object] color=" << getColor() << " area=" << getArea() << endl;
}

class Circle:public Shape {
private:
    double radius;
public:
    Circle();
    Circle(string c, double r);
    ~Circle();
    void setRadius(double r);
    double getRadius();
    double getArea();
    void display();
}; 
Circle::Circle() {
    radius = 1;
    cout << "Circle default Constructor called." << endl; 
}
Circle::Circle(string c, double r): Shape(c), radius(r) {
    cout << "Circle constructor called." << endl;
}
Circle::~Circle() {
    cout << "Circle destructor called." << endl;
}
void Circle::setRadius(double r) {
    radius = r;
}
double Circle::getRadius() {
    return radius;
}
double Circle::getArea() {
    return 3.14159 * radius * radius;
}
void Circle::display() {
    cout << "[Circle Object] color=" << getColor() << " area=" << getArea() << endl;
}

class RoundRectangle:public Rectangle {
private:
    double roundRadius;
public:
    RoundRectangle();
    RoundRectangle(string c, double w, double h, double r);
    ~RoundRectangle();
    void setRoundRadius(double r);
    double getRoundRadius();
    double getArea();
    void display();
};
RoundRectangle::RoundRectangle() {
    roundRadius = 1;
    cout << "RoundRectangle default Constructor called." << endl;
}
RoundRectangle::RoundRectangle(string c, double w, double h, double r):Rectangle(c, w, h) {
    roundRadius = r;
    cout << "RoundRectangle constructor called." << endl;
}
RoundRectangle::~RoundRectangle() {
    cout << "RoundRectangle destructor called." << endl;
}
void RoundRectangle::setRoundRadius(double r) {
    roundRadius = r;
}
double RoundRectangle::getRoundRadius() {
    return roundRadius;
}
double RoundRectangle::getArea() {
    return getWidth() * getHeight() - (roundRadius * roundRadius * 4 - 3.14159 * roundRadius * roundRadius);
}
void RoundRectangle::display() {
    cout << "[RoundRectangle Object] color=" << getColor() << " area=" << getArea() << endl;
}

int main(void) {
    Shape shape1, shape2("red");
    shape1.display();
    shape2.display();
    cout << endl;

    Circle circle1, circle2("red", 6);
    circle1.display();
    circle2.display();
    cout << endl;

    Rectangle rect1, rect2("black", 5, 4);
    rect1.display();
    rect2.display();
    cout << endl;

    RoundRectangle round1, round2("green", 5, 4, 0.5);
    round1.display();
    round2.display();
    cout << endl;

    cout << "OVER......" << endl;
    return 0;
}