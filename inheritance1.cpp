#include <iostream>
using namespace std;
class Employee
{
protected:
    string name;
    int age;

public:
    void putData()
    {
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter age : ";
        cin >> age;
    }
    void showData(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
class Manager : public Employee
{
protected:
    const string role= "Manager";
    const int salary = 80000;

public:
    void putData()
    {
        Employee::putData();
    }
    void showData(){
        Employee::showData();
        cout<<"Role : "<<role<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main()
{
    Manager M1;
    M1.putData();
    M1.showData();
}