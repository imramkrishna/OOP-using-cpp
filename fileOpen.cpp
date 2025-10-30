#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream exp("example.txt");
    if(exp.is_open()){
        exp<<"hello world"<<endl;
        cout<<"File written successful "<<endl;
    }
}