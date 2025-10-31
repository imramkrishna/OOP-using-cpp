#include<iostream>
using namespace std;
class Box{
    private:
    int length;
    public:
    Box(int l=0):length(l){}
    bool operator>(Box &b){
        return length>b.length;
    }
};
int main(){
    Box b1(30),b2(20);
    bool x=b1>b2;
    cout<<x<<endl;
}