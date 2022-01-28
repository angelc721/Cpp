//Functions Area Calculator 110 pts 
#include <iostream> 
#include <math.h>
#include <string> 
using namespace std; 

void triangle(int x, int y)
{
    float a = x*y/2;
    cout <<"The area is "<<a; 
}
void rect(int x, int y)
{
    float a = x*y; 
    cout<<"The area is "<<a;
}
void square (int x)
{
    float a = x*x;
    cout<<"The area is "<<a; 
}
void circle(int x)
{
    float a = M_PI*x*x; 
    cout<<"The area is "<<a; 
}
int main()
{
    int x=0;
    int base =0;
    int height =0;
    int length =0;
    int width =0;
    int side =0;
    int r=0; 

    cout<<"Shape Area Calculator version 0.1 (c) 2005 Mitchell Sample Output, Inc."<<endl;
    do
    {
        cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
        cout<<endl;
        cout<<"1) Triangle"<<endl; 
        cout<<"2) Rectanglee"<<endl;
        cout<<"3) Square"<<endl;
        cout<<"4) Circle"<<endl;
        cout<<"5) Quit"<<endl;
        cout<<"Which shape: "; 
        cin>>x;
        if(x==1)
        {
            cout<<"Base: ";
            cin>>base;
            cout<<"Height: ";
            cin>>height;
            triangle(base, height); 
        }
        else if(x==2)
        {
            cout<<"Length: ";
            cin>>length;
            cout<<"Width: ";
            cin>>width;
            rect(length, width);
        }
        else if(x==3)
        {
            cout<<"Side length: ";
            cin>>side;
            square(side);
        }
        else if(x==4)
        {
            cout<<"Radius: ";
            cin>>r;
            circle(r); 
        }
    }while (x!=5);

    cout<<"Goodbye. "; 
    return 0; 

}
