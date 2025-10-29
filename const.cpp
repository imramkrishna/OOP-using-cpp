#include<iostream>
using namespace std;
class X{
    private:
    const string name="ram";
    public:
        int data;
    X(int d=0){
        data=d;
    }
    string getName() const{ //const function to access private const data member
        return name;
    }
    
};
int main(){
    X x1(10);
    X *x3=new X(10);
    const X x2(5);
    //in this x1 obj name cannot be changed because it is const
    //same no any data member of x2 can be changed because it is defined with const keyword
    cout<<x2.data<<endl;
    cout<<x1.getName()<<endl;
    cout<<x3->data<<endl;
}