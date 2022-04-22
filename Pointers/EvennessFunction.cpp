//Evenness Function 60 pts
#include <iostream>
using namespace std;

bool isEven(int *n){
    if(*n%2 ==0)
        return true;
    else 
        return false;    
}
bool isDivisibleBy3(int *n){
    if(*n %3==0)
        return true;
    else 
        return false;
}
int main(){
    for(int i=1; i<21; i++){
        int *p = &i;

        cout<<*p;
        if(isEven(p)==true){
            cout<<" <";
        }
        if(isDivisibleBy3(p)==true){
            cout<<" =";
        } 
        cout<<endl;
    }
    return 0;
}
