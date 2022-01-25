//If statements Gender game 50 pts 
#include <iostream> 
using namespace std; 
int main()
{
    int age;
    string gender, firstName, lastName, marry; 
    cout<<"What is your gender (M or F): "; 
    cin >> gender;
    cout<<"First name: ";
    cin >> firstName;
    cout<<"Last name: ";
    cin >> lastName;
    cout<<"Age: ";
    cin>> age;
    cout<<" "<<endl; 
    string name = firstName +" "+lastName; 
    if(age>=20 && gender=="F")
    {
        cout<<"Are you married, "<<firstName<<" (y or n)? ";
        cin >> marry; 
        if (marry=="y")
        {
            cout<<"Then I shall call you Mrs. "<<lastName<<"."<<endl; 
        }
        else 
        {
            cout<<"Then I shall call you Ms. "<<lastName<<"."<<endl; 
        }
    }
    if(age>=20 && gender=="M")
    {
        cout<<"Are you married, "<<firstName<<" (y or n)? ";
        cin>>marry; 
        if (marry=="y")
        {
            cout<<"Then I shall call you Mr. "<<lastName<<"."<<endl; 
        }
        else
        {
            cout<<"Then I shall call you "<<name<<"."<<endl; 
        }
        
    }
    if(age<20)
    {
        cout<<"hen I shall call you "<<name<<endl; 
    }
}