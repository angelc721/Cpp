//If statements compare to challenge 35 pts
#include <iostream> 
#include <string> 
using namespace std; 
int main()
{
    string a = "Happy New Year";
    string b = "Happy New Year"; 
    string c = "Hello"; 
    string d = "Hello";
    string e = "Elephant"; 
    string f = "Penguin"; 
    string g = "Cat"; 
    string h = "Fish"; 

    cout<<"Comparing \"Happy New Year\" and \"Happy New Year\" produces "; 
    int result = a.compare(b); 
    cout<<result<<endl; 

    cout<<"Comparing \"Hello\" and \"Hello\" produces ";
    result = c.compare(d);
    cout<<result<<endl; 

    cout<<"Comparing \"Hello\" and \"Elephant\" produces ";
    result = d.compare(e); 
    cout<<result<<endl; 

    cout<<"Comparing \"Hello\" and \"Fish\" produces "; 
    result = d.compare(h); 
    cout<<result<<endl; 

    cout<<"Comparing \"Penguin\" and \"Fish\" produces ";
    result = f.compare(h); 
    cout<<result<<endl; 

    cout<<"Comparing \"Penguin\" and \"Cat\" produces "; 
    result = f.compare(g);
    cout<<result<<endl; 

    cout<<"Comparing \"Elephant\" and \"Cat\" produces "; 
    result = e.compare(g); 
    cout<<result<<endl;

    cout<<"Comparing \"Cat\" and \"Hello\" produces ";
    result = g.compare(d); 
    cout<<result<<endl;

    cout<<"Comparing \"Happy New Year\" and \"Hello\" produces ";
    result = a.compare(c); 
    cout<<result<<endl; 

    cout<<"Comparing \"Cat\" and \"Fish\" produces "; 
    result = g.compare(h); 
    cout<<result<<endl; 

    cout<<"Comparing \"Hello\" and \"Penguin\" produces ";
    result = c.compare(f);
    cout<<result<<endl; 

    cout<<"Comparing \"Fish\" and \"Happy New Year\" produces ";
    result = h.compare(a); 
    cout<<result<<endl; 

    return 0; 
}
