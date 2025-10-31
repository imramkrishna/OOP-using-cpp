#include<iostream>
using namespace std;
class X{
    private:
    int data;
    public:
    X(int l=0):data(l){
    }
    friend void increase(class X, class Y);
    friend class Y;
};
class Y{
    private:
    int secret;
    public:
    Y(int l=0):secret(l){}
    void showXData(X &a){
        cout<<a.data<<endl;
    }
    friend void increase(class X, class Y);
};
void increase(X x, Y y){
    cout<<x.data+y.secret<<endl;
}
int main(){
    X x(10);
    Y y(20);
    y.showXData(x);
    increase(x,y);
}