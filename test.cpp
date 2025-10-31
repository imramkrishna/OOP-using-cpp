#include <iostream>
using namespace std;

class Box{
    int l;
    public:
    int getCube();
};
int Box::getCube(){
    int l=Box::l;
    return l*l*l;
}