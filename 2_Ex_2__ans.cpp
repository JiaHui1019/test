#include <iostream>
using namespace std;
class Rectangle
{
private:
    double width;
    double height;
    static int count;
public:
    Rectangle(double width = 1.0, double height = 1.0) {
        this->width = width;
        this->height = height;
        count++;
    }
    ~Rectangle(){
        count--;
    }
    double getWidth() {
        return width;
    }
    double getHeight() {
        return height;
    }
    void setWidth(int width) {
        this->width = width;
    }
    void setHeight(int height) {
        this->height = height;
    }
    double getArea() {
        return width * height;
    }
    double getPerimeter() {
        return (width + height) * 2;
    }
    static int getCount() {
        return count;
    }
    void display() {
        cout << "Width=" << getWidth() << " Height=" << getHeight();
        cout << " Area=" << getArea() << " Perimeter=" << getPerimeter() << endl;
        cout << "The number of rectangle objects is " << Rectangle::getCount() << endl << endl;
    }
};
int Rectangle::count = 0;

int main(void)
{
    double width, height;
    Rectangle r1;
    cout << "Output information for the first default rectangle object: " << endl;
    r1.display();

    cout << "Please input width and height (width, height) : ";
    cin >> width >> height;
    Rectangle r2(width, height);
    cout << "Output information for the second rectangle object: " << endl;
    r2.display();

    return 0;
}