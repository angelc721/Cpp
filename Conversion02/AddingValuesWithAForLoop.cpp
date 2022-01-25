//For loops adding values with a for loop 30 pts
#include <iostream> 
using namespace std; 
int main()
{
    int x; 
    cout<<"Number: ";
    cin>>x; 
    int sum =0;
    cout<<" "<<endl;
    for(int i=1; i<=x; i++)
    {
        cout<<i<<" "; 
        sum = (i*(i+1))/2;
    }
    cout<<" "<<endl;
    cout<<"The sum is "<<sum<<"."<<endl; 
    return 0; 
}