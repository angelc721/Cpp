//pointers #1 
#include <iostream>
#include <string>

using namespace std;
void sayHello(string name){ //output the actual string 
    cout<<"Hello "<<name; 
}
void sayHi(string &name){ //output hi and the address of the variable name 
    cout<<"Hi "<<name;
}

int * larger(int *x, int *y){ //compare the two numbers using pointer 
    if(*x>*y) return x; //compare them by value and then return 
    else return y;
}

int main()
{
    string name = "World"; 
    sayHello(name); //print "Hello World"
    cout<<endl;
    
    string *pName = &name; //*pName is a pointer variable that stores the address of variable name 
    sayHi(*pName); //print "Hi World"
    int a = 5; //define the variables 
    int b = 1;
    int *pNum = larger(&a,&b); //pNum stored whatever returned from the function "larger"
    cout<<"\n"<<*pNum<<" is larger"<<endl; //print out the larger number which is stored in pNum which is 5 
    return 0;
}