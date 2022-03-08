#include <iostream> 
using namespace std; 
class Quadrilateral
{
    private:
    double Area; 
    string type;

    public: 
    Quadrilateral(){}
    Quadrilateral(int x)
    {
     
        Area = x*x;
        type = "square"; 

    }
    Quadrilateral(int w, int h)
    {
        
        Area = w*h;
        type = "rectangle"; 
    }
    Quadrilateral(int b1, int b2, int h)
    {
        
        Area = ((b1+b2)*h)/2;
        type = "trapezoid"; 
    }
    double getArea()
    {
        return Area; 
    }
    string getType()
    {
        return type; 
    }
};
int main()
{
    Quadrilateral shape1(5);
    Quadrilateral shape2(5,4); 
    Quadrilateral shape3(2,6,4); 
    cout<<"The Area of shape 1 is: "<<shape1.getArea()<<endl;
    cout<<"The Area of shape 2 is: "<<shape2.getArea()<<endl;
    cout<<"The Area of shape 3 is: "<<shape3.getArea()<<endl; 
    return 0; 
}
