#include<iostream>
using namespace std;
class Distance{
    private:
    int meter;
    int centimeter;
    public:
    Distance(int m=0,int cm=0):meter(m),centimeter(cm){}
    // Distance operator+(Distance d2){
    //     return Distance(meter+d2.meter,centimeter+d2.centimeter);
    // }
    void show(){
        cout<<meter<<endl;
        cout<<centimeter<<endl;
    }
    void setData(int m,int cm){
        meter=m;
        centimeter=cm;
    }
    int getMeter() const{
        return meter;
    }
    int getCentimeter() const{
        return centimeter;
    }
};

//using nonmember function
Distance operator-(const Distance &d1,const Distance &d2){
    int m = d1.getMeter() - d2.getMeter();
    int cm = d1.getCentimeter() - d2.getCentimeter();
    if(cm < 0){
        cm += 100;
        m -= 1;
    }
    return Distance(m, cm);
}
int main(){
    // simple example
    Distance d1(5, 20);
    Distance d2(2, 80);
    Distance d3 = d1 - d2;
    d3.show();
    return 0;
}