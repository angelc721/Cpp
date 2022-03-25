#include <iostream> 
using namespace std; 
class Quadrilateral
{
    private: 
    double Area;
    string Type; 

    public:
    Quadrilateral(){}
    Quadrilateral(int x)
    {
        Area = x*x;
        Type = "square"; 
    }
    Quadrilateral(int w, int h)
    {
        
        Area = w*h;
        Type = "rectangle"; 
    }
    Quadrilateral(int b1, int b2, int h)
    {
        
        Area = ((b1+b2)*h)/2;
        Type = "trapezoid"; 
    }
    double getArea()
    {
        return Area; 
    }
    string getType()
    {
        return Type; 
    }
    int changeShape(int x)
    {
        Area = x*x;
        Type = "square";
        return Area;
    }
    int changeShape(int w, int h)
    {
        Area = w*h;
        Type = "rectangle"; 
        return Area; 
    }
    int changeShape(int b1, int b2, int h)
    {
        Area = ((b1+b2)*h)/2;
        Type = "trapezoid"; 
        return Area; 
    }
};
int main()
{
    Quadrilateral shapes[3] = {Quadrilateral(6), Quadrilateral(6,5),Quadrilateral(3,6,5)}; 
    Quadrilateral squares[3]; 
    for(int i=0; i<3; i++)
    {
        squares[i]=Quadrilateral(5-i);
    }
    squares[1].changeShape(6,6);
    cout<<"The area of a "<<shapes[0].getType()<<" with a side of 6 is "<<shapes[0].getArea()<<endl; 
    cout<<"The area of a "<<shapes[1].getType()<<" with a side of 6 and 5 is "<<shapes[1].getArea()<<endl;
    cout<<"The area of a "<<shapes[2].getType()<<" with bases of 3 and 6 and height of 5 is "<<shapes[2].getArea()<<endl; 
    cout<<endl;
    cout<<"The area of a "<<squares[0].getType()<<" with a side of 5 is "<<squares[0].getArea()<<endl; 
    cout<<"The area of a "<<squares[1].getType()<<" with a side of 6 and 6 is "<<squares[1].getArea()<<endl;
    cout<<"The area of a "<<squares[2].getType()<<" with a side of 3 is "<<squares[2].getArea()<<endl; 
    cout<<endl; 
    cout<<"The total area of the six shapes are "<<shapes[0].getArea()+shapes[1].getArea()+shapes[2].getArea()+squares[0].getArea()+squares[1].getArea()+squares[2].getArea()<<endl; 
    return 0; 
}
