#include <iostream>
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
            cout << "Constructor called." << endl;
        }
        ~Rectangle() {
            cout << "Destructor called." << endl;
        }
        
        double getWidth() { return width; }
        double getHeight() { return height; }

        void setWidth(double width) { this->width = width; }
        void setHeight(double height) { this->height = height; }

        double getArea() { return width * height; }
        double getPerimeter() { return 2 * (width + height); }

        void display() {
            cout << "Width=" << getWidth() << " Height=" << getHeight();
            cout << " Area=" << getArea() << " Perimeter=" << getPerimeter() << endl;
        }
};

int main(void) {
    const int N = 3;
    Rectangle *pRectangle[N];
    double w, h;
    for(int i = 0; i < N; i++) {
        cout << "Please input No." << i << " rectangle's width and height: ";
        cin >> w >> h;
        Rectangle r(w, h);
        pRectangle[i] = &r;
        pRectangle[i]->display(); 
    }
    
    return 0;
}