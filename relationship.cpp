#include<iostream>
using namespace std;
class Engine{
    protected:
    int hp;
    public:
    Engine(int hp=0){
        hp=hp;
    }
    int getHp(){
        return hp;
    }
};
class Car{
    private:
    Engine e;
    int price;
    public:
    Car(Engine e,int p):e(e),price(p){}
    void show(){
        cout<<"Price : "<<price<<endl;
        cout<<"Engine Power : "<<e.getHp()<<" hp "<<endl;
    }
};
int main(){
    Engine e(20);
    Car c1(e,2000);
    c1.show();
}