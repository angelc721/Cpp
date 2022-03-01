//Class and objects #2
#include <iostream> 
#include <stdlib.h>
#include <ctime> 
#include <math.h>
#include <stdio.h> 
double cal;
double cal2;
double height =0; 
using namespace std; 
class triangle
{
    public: 
    int x1, y1, x2, y2, x3, y3; 
    double side1, side2, side3, side4, area; 
    triangle(int tx1, int ty1, int tx2, int ty2, int tx3, int ty3)
    {
        x1 = tx1;
        x2 = tx2; 
        x3 = tx3; 
        y1 = ty1; 
        y2 = ty2; 
        y3 = ty3; 
        side1 = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
        side2 = sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2))); 
        side3 = sqrt(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1))); 
        height = side1+side2+side3;
        height /= 2; 
        cal=sqrt(height*(height-side1)*(height-side2)*(height-side3)); 
    }
    void run(int x1, int y1, int x2, int y2, int x3, int y3)
    {
        cout<<"Coordinate 1: ("<<x1<<","<<y1<<")"<<endl; 
        cout<<"Coordinate 2: ("<<x2<<","<<y2<<")"<<endl; 
        cout<<"Coordinate 3: ("<<x3<<","<<y3<<")"<<endl; 
        cout<<"3 side length: ";
        cout<<side1<<endl;
        cout<<side2<<endl;
        cout<<side3<<endl; 
        cout<<"area: "<<cal<<endl; 

    }
}; 
int main()
{
    srand(time(NULL));
    int xone, xtwo, xthree, yone, ytwo, ythree; 
    xone = rand()%100+1;
    xtwo = rand()%100+1; 
    xthree = rand()%100+1;
    yone = rand()%100+1;
    ytwo = rand()%100+1;
    ythree = rand()%100+1; 
    triangle trig1(xone, yone, xtwo, ytwo, xthree, ythree); 
    trig1.run(xone, yone, xtwo, ytwo, xthree, ythree); 
    return 0; 
}