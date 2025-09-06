//Operator overloading using non member functions
#include<iostream>
using namespace std;
class Box{
    private:
    float length,breadth;
    public:
    Box(float l,float b):length(l),breadth(b){};
    void show(){
        cout<<"Length and Breadth are : "<<length<<" "<<breadth<<endl;
    }
    friend Box operator+(Box a,Box b);
};
Box operator+(Box a,Box b){
    return Box(a.length+b.length,a.breadth+b.breadth);
}
int main(){
    Box b1(2.4,3.4);
    Box b2(5.3,3.3);
    Box b=b1+b2;
    b.show();
    return 0;
}