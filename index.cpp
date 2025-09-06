#include <iostream>
using namespace std;
class Manager
{
public:
    void show(int x, int y)
    {
        cout << x << y << endl;
    }
    void show(int x)
    {
        cout << x << endl;
    }
    void show(int x, int y, int z)
    {
        cout << x << y << z << endl;
    }
};
int main()
{
    Manager m;
    m.show(1, 2);
    return 0;
}