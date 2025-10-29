#include <iostream>
using namespace std;
int &square(int &a)
{
    return a = a * a;
}
int globalVar = 20;
int &getGlobal()
{
    return globalVar;
}
int main()
{
    getGlobal()=30;
    cout << getGlobal() << endl;
    return 0;
}