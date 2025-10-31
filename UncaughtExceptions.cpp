#include <iostream>
using namespace std;
void myTerminate(){
    cout<<"Uncaught Exception in the program"<<endl;
    abort();
}
int main(){
    set_terminate(myTerminate);
    throw runtime_error("Unhandled exception");
}
