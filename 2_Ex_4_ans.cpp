#include<iostream>
using namespace std;

class Rectangle
{
private:
    double width;
    double height;
public:
    Rectangle();
    Rectangle(double width, double height);
    ~Rectangle();
    double getWidth();
    double getHeight();
    void setWidth(double width);
    void setHeight(double width);
    double getArea();
    double getPerimeter();
    void display();
};

Rectangle::Rectangle() {
    this->width = 1.0;
    this->height = 1.0;
    cout << "Default Constructor called." << endl;
}
Rectangle::Rectangle(double width, double height) {
    this->width = width;
    this->height = height;
    cout << "Constructor called." << endl;
}
Rectangle::~Rectangle() {
    cout << "Destructor called." << endl;
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
double Rectangle::getPerimeter() {
    return (width + height) * 2;
}
void Rectangle::display() {
    cout << "Width=" << getWidth() << " Height=" << getHeight();
    cout << " Area=" << getArea() << " Perimeter=" << getPerimeter() << endl;
}

int main(void) 
{
    const int N = 3;
    Rectangle *pRectangle[N];
    double w, h;
    for(int i = 0; i < N; i++) {
        cout << "Please input No." << i << " rectangle's width and height: ";
        cin >> w >> h;
        pRectangle[i] = new Rectangle(w, h);
        pRectangle[i]->display();
    }
    for(int i = 0; i < N; i++) {
        delete pRectangle[i];
    }
    return 0;
}