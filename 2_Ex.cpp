#include<iostream>
using namespace std;

class Rectangle{
    private:
        double width, height;
    public:
        Rectangle();
        Rectangle(double newW, double newH);
        
        void setWidth(double width){
            this->width = width;
        }
        void setHeight(double height){
            this->height = height;
        }
        double getWidth(){
            return width;
        }
        double getHeight(){
            return height;
        }

        void display(){
            cout << "The width is " << width << ", " << "and the height is " << height << endl;
        }
        void getArea(){
            double area = width * height;
            cout << "The area is " << area << endl;
        }
        void getPerimeter(){
            double perimeter = 2 * (width + height);
            cout << "The perimeter is " << perimeter << endl;
        }
};

Rectangle::Rectangle(){
    this->width = 1.0;
    this->height = 1.0;
}
Rectangle::Rectangle(double newW, double newH){
    this->width = newW;
    this->height = newH;
}

int main(void){
    Rectangle myRectangle1;
    myRectangle1.display();
    myRectangle1.getArea();
    myRectangle1.getPerimeter();

    double width, height;
    cin >> width >> height;
    Rectangle myRectangle2(width, height);
    myRectangle2.display();
    myRectangle2.getArea();
    myRectangle2.getPerimeter();

    return 0;
}