#include<iostream>
using namespace std;
class Animal{
    public:
    void Eat(){
        cout<<"I can Eat"<<endl;
    }
    void Bark(){
        cout<<"I can Bark"<<endl;
    }
};
class Dog:public Animal{
    public:
    void Run(){
        cout<<"I can run"<<endl;
    }

};
int main(){
    Dog d1;
    d1.Run();
    d1.Bark();
}