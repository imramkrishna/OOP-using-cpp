#include<iostream>
using namespace std;
int& getReference(int arr[],int index){
    return arr[index];
}
int main(){
    int arr[2]={1,2};
    cout<<getReference(arr,1)<<endl;
    return 0;
}