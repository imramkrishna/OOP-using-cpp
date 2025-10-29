#include <iostream>
using namespace std;
class Box
{
private:
    int length;
    static int count;
public:
    // static int count; // static variable count, incase to make it private we can add new static function to access it
    Box(int l = 0) : length(l) { count++; }
    static int getCount(){
        return count;
    }
};
int Box::count = 0;
int main()
{
    Box b1, b2, b3,b4;
    cout << "Count : " << Box::getCount()<<endl;
    return 0;
}