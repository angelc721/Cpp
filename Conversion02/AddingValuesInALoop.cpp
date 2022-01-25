//While loops Adding Values in a loop 30 pts 
#include <iostream> 
using namespace std; 
int main()
{
    cout<<"I will add up the numbers you give me. "<<endl; 
    int num=0;
    int sum=0;
    cout<<"Number: ";
    cin>>num; 
    sum = num+sum; 
    while (num!=0)
    {
        cout<<"The total so far is "<<sum<<"."<<endl; 
        cout<<"Number: ";
        cin>>num; 
        sum = num+sum; 
    }
    cout<<" "<<endl;
    cout<<"The total is "<<sum<<"."<<endl; 
}