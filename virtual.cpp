#include<iostream>
using namespace std;
class A{
    public:
    void display(){
        cout<<"Class A constructor called"<<endl;
    }
};
class B:virtual public A{};//virtual keyword solved ambuiguity problem of inheritance
class C:virtual public A{};
class D:public C,public B{};
int main(){
    D d1;
    d1.display();
}