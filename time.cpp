#include <iostream>
using namespace std;
class Time
{
public:
    int Hour;
    int Minute;
    int Second;

    Time(int Hr, int Min, int Sec) : Hour(Hr), Minute(Min), Second(Sec)
    {
    }
};
Time Add(Time t1, Time t2)
{
    int hr = t1.Hour + t2.Hour;
    int min = t1.Minute + t2.Minute;
    if(min>=60){
        int count=min/60;
        hr=hr+count;
        min=min%60;
    }
    int sec = t1.Second + t2.Second;
    if(sec>=60){
        int count=sec/60;
        min=min+count;
        sec=sec%60;
    }
    return Time(hr, min, sec);
}
int main()
{
    Time t1(1,60,3),t2(2,0,0);
    Time newTime=Add(t1,t2);
    cout<<newTime.Hour<<endl;
    cout<<newTime.Minute<<endl;
    cout<<newTime.Second<<endl;
}
