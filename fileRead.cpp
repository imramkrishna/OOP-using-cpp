#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string line;
    ifstream f("example.txt");
    while(getline(f,line)){
        cout<<line<<endl;
    }
    f.close();
}