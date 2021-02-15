#include <iostream>
using namespace std;

class Base {
private:
    int base;
public:
    Base();
    Base(int base);
    ~Base();
    void print();
};
Base::Base() {
    base = 0;
    cout << "Base's default constructor called." << endl;
}
Base::Base(int base) {
    this->base = base;
    cout << "Base's constructor called." << endl;
}
Base::~Base() {
    cout << "Base's destructor called." << endl;
}
void Base::print() {
    cout << "base = " << base << endl;
}

class Derived:public Base {
private:
    int derived;
public:
    Derived();
    Derived(int base, int derived);
    ~Derived();
    void print();
};
Derived::~Derived() {
    cout << "Derived's destructor called." << endl;
}
Derived::Derived() {
    derived = 0;
    cout << "Derived's default constructor called." << endl;
}
Derived::Derived(int base, int derived): Base(base), derived(derived) {
    cout << "Derived's constructor called." << endl;
}
void Derived::print() {
    Base::print();
    cout << "derived = " << derived << endl;
}

int main(void) {
    Derived obj(5, 6);
    obj.print();
    return 0;
}