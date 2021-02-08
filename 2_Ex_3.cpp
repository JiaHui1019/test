#include<iostream>
using namespace std;

class Rectangle {
    private:
        double width, height;
    
    public:
        Rectangle() {
            this->width = 1.0;
            this->height = 1.0;
            cout << "Default Constructor called." << endl;
        }
        Rectangle(double width, double height) {
            this->width = width;
            this->height = height;
            cout << "Constructor called." <<endl;
        }
        ~Rectangle() { cout << "Destructor called." << endl; }

        double getWidth() { return width; }
        double getHeight() { return height; }

        void setWidth(double width) { this->width = width; }
        void setHeight(double height) { this->height = height; }

        double getArea() { return width * height; }
        double getPerimeter() { return 2 * (width + height); }
};

int main(void) {
    Rectangle rect[3] = {Rectangle(3, 4), Rectangle(7, 6), Rectangle(5, 6)};
    cout << "For rect[0]: " << endl;
    cout << "The width     is " << rect[0].getWidth() << endl;
    cout << "The height    is " << rect[0].getHeight() << endl;
    cout << "The area      is " << rect[0].getArea() << endl;
    cout << "The perimeter is " << rect[0].getPerimeter() << endl;
    cout << "For rect[1]: " << endl;
    cout << "The width     is " << rect[1].getWidth() << endl;
    cout << "The height    is " << rect[1].getHeight() << endl;
    cout << "The area      is " << rect[1].getArea() << endl;
    cout << "The perimeter is " << rect[1].getPerimeter() << endl;
    cout << "For rect[2]: " << endl;
    cout << "The width     is " << rect[2].getWidth() << endl;
    cout << "The height    is " << rect[2].getHeight() << endl;
    cout << "The area      is " << rect[2].getArea() << endl;
    cout << "The perimeter is " << rect[2].getPerimeter() << endl;
    return 0;
}