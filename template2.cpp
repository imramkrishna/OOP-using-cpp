#include<iostream>
using namespace std;
template <typename T>
class Base {
public:
    void display() { cout << "Base class: " << typeid(T).name() << endl; }
};

template <typename T>
class Derived : public Base<T> {
public:
    void show() { cout << "Derived class" << endl; }
};

int main() {
    Derived<int> obj;
    obj.display();  // From Base<int>
    obj.show();     // From Derived<int>
    return 0;
}
