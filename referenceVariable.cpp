#include <iostream>
using namespace std;
int main(){
    int x=10;
    int &ref=x;
    cout<<ref<<endl;
    ref=20; // here ref changes the value of x ==> x=20
    cout<<x<<endl;
    return 0;
}