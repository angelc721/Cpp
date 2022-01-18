//Keyboard BMI calculator 15-28 pts 
#include <iostream>
using namespace std; 
int main()
{
    double heightinfeet, heightininch, weightinpound; 
    cout<<"Your height (feet only): "; 
    cin >> heightinfeet;
    cout<<"Your height (inches): ";
    cin >> heightininch; 
    double height = (12*heightinfeet+heightininch)*0.0254; 
    cout<<"Your weight in pounds: ";
    cin >> weightinpound; 
    double weight = weightinpound*0.453592; 
    cout<<" "<<endl; 
    double bmi=(weight/(height*height));
    cout<<"Your BMI is "<<bmi<<endl; 
    return 0; 
}