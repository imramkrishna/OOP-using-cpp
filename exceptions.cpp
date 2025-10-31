#include<iostream>
using namespace std;
int main(){
    int b;
    try{
        cout<<"Enter a number : ";
        cin>>b;
        cin.ignore();
        if(b<=0){
            throw "the value must be greater than 0";
        }
        throw 0;
    }catch(const char* msg){
        cout<<"Exception caught : "<<msg<<endl;
    }catch(...){
        cout<<"Invalid exception"<<endl;
    }
}