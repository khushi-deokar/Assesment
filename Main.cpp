#include<iostream>
#include<unistd.h>
#include<string.h>
using namespace std;
class Car
{
    public:
    string brand;
    string model;
    int year;
};
int main()
{
    Car carObj1;
    carObj1.brand="HYUNDAI";
    carObj1.model="CRETA";
    carObj1.year=2015;
    Car carObj2;
    carObj2.brand="SUZUKI";
    carObj2.model="SWIFT";
    carObj2.year=2005;
    cout<<carObj1.brand<<"\n"<<carObj1.model<<"\n"<<carObj1.year<<"\n";
    cout<<carObj2.brand<<"\n"<<carObj2.model<<"\n"<<carObj2.year<<"\n";
    return 0;

}