//If statements A Little Quiz 40 pts Angel Chuang 
#include <iostream> 
using namespace std; 
int main()
{
    string answer; 
    int correct=0; 
    cout<<"Are you ready for a quiz? (Y/N) ";
    cin >> answer; 
    if (answer == "Y")
    {
        cout<<"Okay, here it comes!"<<endl; 
        cout<<" "<<endl; 
        cout<<"Q1) What is the capital of Alaska?"<<endl;
        cout<<"   1)Melbourne"<<endl; 
        cout<<"   2)Anchorage"<<endl;
        cout<<"   3)Juneau"<<endl;
        cout<<"> "; 
        int choice; 
        cin>>choice; 
        if (choice ==3)
        {
            cout<<" "<<endl; 
            cout<<"That's right!"<<endl; 
            cout<<" "<<endl; 
            correct++; 
        }
        else 
        {
            cout<<" "<<endl;
            cout<<"Sorry, Juneau is the capital of Alaska."<<endl; 
        } 
        cout<<" Q2) Can you store the value \"cat\" in a variable of type int?"<<endl;
        cout<<"   1) yes"<<endl;
        cout<<"   2) no"<<endl; 
        cout<<"> "; 
        int choice2; 
        cin>>choice2; 
        if (choice2 == 2)
        {
            cout<<" "<<endl;
            cout<<"That's right!"<<endl;
            cout<<" "<<endl; 
            correct++;
        }
        else
        {
            cout<<" "<<endl; 
            cout<<"Sorry, \"cat\" is a string. ints can only store numbers."<<endl; 
        }
        cout<<"Q3) What is the result of 9+6/3?"<<endl;
        cout<<"   1) 5"<<endl;
        cout<<"   2)11"<<endl;
        cout<<"   3)15/3"<<endl; 
        cout<<" "<<endl; 
        cout<<"> "; 
        int choice3;
        cin>>choice3; 
        if (choice3 == 2)
        {
            cout<<" "<<endl; 
            cout<<"That's right!"<<endl; 
            cout<<" "<<endl; 
            correct++; 
        }
        else
        {
            cout<<" "<<endl;
            cout<<"Sorry, 11 is the correct answer."<<endl; 
            cout<<" "<<endl; 
        }
        if (correct == 3)
        {
            cout<<"Overall, you got all 3 correct."<<endl; 
        }
        else
        {
            cout<<"Overall, you got "<<correct<<" out of 3 correct."<<endl; 
        }
        cout<<"Thanks for playing"<<endl; 
    }
}