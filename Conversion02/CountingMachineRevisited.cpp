//For loops counting machine revisited 25 pts 
#include <iostream>
using namespace std; 
int main()
{
    int x,y,z; 
    cout<<"Count from: ";
    cin>>x; 
    cout<<"Count to: ";
    cin>>y;
    cout<<"Count by: ";
    cin>>z; 
    cout<<" "<<endl;
    for(int n=x; n<=y; n=n+z)
    {
        cout<<n<<" "; 
    }
    return 0; 
}