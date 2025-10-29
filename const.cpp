#include<iostream>
using namespace std;
class X{
    public:
    int data;
    const string name="ram";
    X(int d=0){
        data=d;
    }
};
int main(){
    X x1(10);
    const X x2(5);
    //in this x1 obj name cannot be changed because it is const
    //same no any data member of x2 can be changed because it is defined with const keyword
    cout<<x2.data<<endl;
    cout<<x1.name<<endl;
}