//Random Numbers A Number Guessing Game 20 pts Angel Chuang
#include <iostream>
#include <stdlib.h>
#include <stdio.h>   
using namespace std; 
int main()
{
    int x, guess; 
    srand (time(NULL));
    x = rand()%10+1; 

    cout<<"I'm thinking of a number from 1 to 10."<<endl;
    cout<<"Your guess: ";
    cin>>guess; 

    if(guess == x)
    {
        cout<<"That's right, my secret number is "<<x<<"!"<<endl; 
    }
    else
    {
        cout<<"Sorry, but I was really thinking of "<<x<<"."<<endl; 
    }
    return 0; 
}