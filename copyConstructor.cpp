#include<iostream>
using namespace std;
class Box{
    public:
    int length;
    Box(int l=0):length(l){}
    Box(Box &b1){
        this->length=b1.length;
    }
    void display(){
        cout<<"Box"<<endl;
    }
};
int main(){
    Box box1(10);
    Box box2=box1; //copy constructor
    box2.display();
    return 0;
}