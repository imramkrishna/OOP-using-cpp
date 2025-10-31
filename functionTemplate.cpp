#include<iostream>
using namespace std;
template <typename T=int> //==int is default generic type
T add(T a,T b){
    return a+b;
}
int main(){
    cout<<add<float>(2.2,3.9)<<endl;
    cout<<add<>(2,5)<<endl;
    cout<<add<string>("ram","krishna")<<endl;
}