#include<iostream>
using namespace std;
class A{
    private:
    int a;
    public:
    A(int a=0):a(a){}
    friend void show(class A,class B);
};
class B{
    private:
    int b;
    public:
    B(int b=0):b(b){}
    friend void show(class A,class B);
};
void show(A a1,B b1){
    cout<<a1.a<<" "<<b1.b<<endl;
    return;
}
int main(){
    A a(5);
    B b(10);
    show(a,b);
}