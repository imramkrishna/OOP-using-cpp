#include<iostream>
using namespace std;
class Base{
    public:
    virtual void display(){
        cout<<"Base class constructor called"<<endl;
    }
};
class Derived:public Base{
    public:
    void display() override{
        cout<<"Derived class contructor called"<<endl;
    }
};
int main(){
    Derived d;
    d.display();
    Base *b=&d;
    b->display();
}