#include <iostream>
using namespace std;

//base class food item
class fooditem
{
  public :
  void fooditem()
  {
    cout<<"I am a food item"<<endl;
  }
};

//derived class italian
class italian : public fooditem
{
  public :
  void italian()
  {
    cout<<"i am an italian food item"<<endl;
  }
};

//derived class for pasta
class pasta : public italian
{
  public :
  void pasta()
  {
    cout<<"i am pasta"<<endl;
  }
};
//create an object of pasta
int main()
{
pasta mypasta;
italian myitalian;
fooditem myfooditem;

return 0;
}
