// operator overloading
#include <iostream>
using namespace std;
class SuperHero
{
private:
    int power;

public:
    SuperHero() : power(0) {};
    SuperHero(int p) : power(p) {};
    SuperHero operator+(SuperHero SP)
    {
        return SuperHero(power + SP.power);
    }
    friend void show(SuperHero SP);
};
void show(SuperHero SP){
    cout<<"Total Power : " <<SP.power<<endl;
}
//Initially there was no way to add twp objects but after overloading the operator the power of two classes is added by operator overloading, the + operator doesnot always performs addition, we can perform any opertion we want
int main()
{
    SuperHero SP1(10);
    SuperHero SP2(15);
    SuperHero total = SP1 + SP2;
    show(total);
    return 0;
}
