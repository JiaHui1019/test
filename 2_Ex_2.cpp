#include<iostream>
using namespace std;

class Rectangle {
    private:
        double width, height;
        static int count;
    
    public:
        Rectangle();
        Rectangle(double newW, double newH);
        ~Rectangle();

        void setWidth(double width) {
            this->width = width;
        }
        void setHeight(double height) {
            this->height = height;
        }

        double getWidth() {
            return width;
        }
        double getHeight() {
            return height;
        }

        double getArea() {
            double area = width * height;
            return area;
        }
        double getPerimeter() {
            double perimeter = 2 * (width + height);
            return perimeter;
        }

        static void getCount() {
            cout << "Object count = " << count << endl;
        }
};

Rectangle::Rectangle() {
    this->width = 1.0;
    this->height = 1.0;
    count++;
}
Rectangle::Rectangle(double newW, double newH) {
    this->width = newW;
    this->height = newH;
    count++;
}
Rectangle::~Rectangle() {
    count--;
}

int Rectangle::count = 0;

int main(void) {
    Rectangle myRectangle1;
    cout << "The width is " << myRectangle1.getWidth() << endl;
    cout << "The height is " <<myRectangle1.getHeight() << endl;
    cout << "The area is " << myRectangle1.getArea() << endl;
    cout << "The perimeter is " << myRectangle1.getPerimeter() << endl;
    myRectangle1.getCount();

    double width, height;
    cin >> width >> height;
    Rectangle myRectangle2(width, height);
    cout << "The width is " << myRectangle2.getWidth() << endl;
    cout << "The height is " << myRectangle2.getHeight() << endl;
    cout << "The area is " << myRectangle2.getArea() << endl;
    cout << "The perimeter is " << myRectangle2.getPerimeter() << endl;
    myRectangle2.getCount();

    return 0;
}