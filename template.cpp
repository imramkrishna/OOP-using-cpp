#include<iostream>
using namespace std;
template <class T>
class MyClass{
    T data;
    public:
    MyClass(T x):data(x){}
    void showData(){
        cout<<data<<endl;
    }
};
int main(){
    MyClass <string> x("ram");
    x.showData();
}