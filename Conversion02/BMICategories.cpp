//If statements BMI categories 35-45 pts 
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
    if (bmi<15.0)
    {
        cout<<"BMI Category: very severely underweight"<<endl; 
    }
    if(bmi>=15.0 && bmi<=16.0)
    {
        cout<<"BMI Category: severely underweight"<<endl; 
    }
    if(bmi>=16.1&&bmi<=18.4)
    {
        cout<<"BMI Category: underweight"<<endl; 
    }
    if(bmi>=18.5&&bmi<=24.9)
    {
        cout<<"BMI Category: normal weight"<<endl; 
    }
    if(bmi>=25.0&&bmi<=29.9)
    {
        cout<<"BMI Category: overweight"<<endl; 
    }
    if(bmi>=30.0&&bmi<=34.9)
    {
        cout<<"BMI Category: moderately obese"<<endl; 
    }
    if(bmi>=35.0&&bmi<=39.9)
    {
        cout<<"BMI Category: severely obese"<<endl; 
    }
    if(bmi>=40.0)
    {
        cout<<"BMI Category: very severely (or \"morbidly\") obese"<<endl; 
    }
    return 0; 
}