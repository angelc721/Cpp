//Functions distance formula 50 pts 
#include <iostream> 
#include <string>
#include <math.h>
using namespace std;
double distance(int x1, int y1, int x2, int y2) 
{
    double d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)); 
    return d; 
}
int main()
{
    double d1 = distance(-2,1 , 1,5);
	cout<<" (-2,1) to (1,5) => "<< d1<<endl;
 
	double d2 = distance(-2,-3 , -4,4);
	cout<<" (-2,-3) to (-4,4) => "<<d2<<endl;
 
	cout<<" (2,-3) to (-1,-2) => "<<distance(2,-3,-1,-2)<<endl;
 
	cout<<" (4,5) to (4,5) => "<<distance(4,5,4,5)<<endl;
    return 0; 
}

