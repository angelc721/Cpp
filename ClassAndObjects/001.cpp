//Class and objects #1 
#include <iostream>
#include <list>
using namespace std;
class Dog
{
    private:
    int Age;
    double Weight; 

    public: 
    Dog(int cAge, double cWeight)
    {
        Age=cAge;
        Weight = cWeight; 
    }
    void GetInfo()
    {
        cout<<"Age: "<<Age<<endl;
        cout<<"Weight: "<<Weight<<endl; 
    }
};
int main()
{
    Dog dog1(10,29);
    dog1.GetInfo(); 
    return 0; 
}