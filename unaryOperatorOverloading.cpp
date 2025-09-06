#include <iostream>
using namespace std;
class Box
{
private:
    int length;

public:
    Box(int l = 0) : length(l) {};
    Box operator++(int)
    {
        Box temp=Box(length);
        ++length
        return temp;
    }
    void show()
    {
        cout << length << endl;
    }
};
int main()
{
    Box b1(10);
    b1.show();
    b1++;
    b1.show();
    return 0;
}