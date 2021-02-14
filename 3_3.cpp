#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "constructing Base object.\n";
    }
    ~Base() {
        cout << "destructing Base object.\n";
    }
};

class Derived:public Base {
public:
    Derived() {
        cout << "constructing Derived object.\n";
    }
    ~Derived() {
        cout << "destructing Derived object.\n";
    }
};

int main(void) {
    Derived obj;
    return 0; 
}