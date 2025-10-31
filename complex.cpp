#include <iostream>
using namespace std;
class Complex
{
public:
    float img;
    float real;

    Complex(float r, float i) : real(r), img(i) {}
};
Complex operator*(Complex &c1,Complex &c2){
    Complex c3(0,0);
    c3.real=c1.real*c2.real;
    c3.img=c1.img*c2.img;
    return c3;
}
int main(){
    Complex c1(2,3),c2(3,4);
    Complex c3=c1*c2;
    cout<<c3.real<<" "<<c3.img<<endl;
}
