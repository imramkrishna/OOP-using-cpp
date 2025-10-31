#include<iostream>
#include<fstream>

using namespace std;
class Student{
    int id;
    char name[30];
    public:
    Student(){}
    void getData(){
        cout<<"\nEnter student id : ";
        cin>>id;
        cin.ignore();
        cout<<"\nEnter name : ";
        cin.getline(name,30);
    } 
    void showData(){
        cout<<"Student Id : "<<id<<endl;
        cout<<"Student Name : "<<name<<endl;
    }
    int getId(){
        return id;
    }
};
int main(){
    fstream file;
    Student s;
    file.open("example.dat",ios::binary|ios::out);
    for(int i=0;i<=3;i++){
        s.getData();
        file.write((char*)&s,sizeof(s));
    }
    file.close();
    int searchId;
    cout<<"Enter Student Id : "<<endl;
    cin>>searchId;
    cin.ignore();
    file.open("example.dat",ios::binary|ios::in);
    bool found = false;
    while(file.read((char*)&s,sizeof(s))){
        if(s.getId() == searchId){
            s.showData();
            found = true;
            break;
        }
    }
    if(!found){
        cout<<"No student with that id"<<endl;
    }
    file.close();
    return 0;
}