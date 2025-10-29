#include<iostream>
using namespace std;
class Time{
    private:
    int hour;
    int minute;
    int second;
    public:
    Time(int h=0,int m=0,int s=0){
        hour=h;
        minute=m;
        second=s;
    }
    void show(){
        cout<<hour<<" : "<<minute<<" "<<second<<endl;
    }
    Time operator++(int){
        Time temp=*this;
        second++;
        return temp;
    }
};
int main(){
    Time t1(1,2,3);
    t1.show();
    t1++;//post increment operator overloading
    t1.show();
}