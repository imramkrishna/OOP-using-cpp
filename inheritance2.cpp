#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"Base constructor called"<<endl;
    }
    void show(){
        cout<<"Show Function Class Base"<<endl;
    }
};

//here public means that the class A has access to public methods from base class
class A:virtual public Base{ 
    public:
    A(){
        cout<<"Class A constructor called"<<endl;
    }
};
class B:virtual public Base{ 
    public:
    B(){
        cout<<"Class B constructor called"<<endl;
    }
};
class C:public A,public B{
    public:
    C(){
        cout<<"Class C contructor called"<<endl;
    }
};
int main(){
    C c1;
    c1.show(); //this throws an error because both class A and class B has access to show functions. --> this is solved by virtual base class
}
