//Area Calculator 110 pts Angel Chuang
 #include <iostream>
using namespace std;
const double pi = 3.14;

double area_circle(int *radius);
double area_triangle(int *base, int *height);
int area_square(int *side);
int area_rectangle(int *length, int *width);

int main()
{
    int numShape; int numBase; int numHeight; int radius;
    cout<<"Shape Area Calculator version 0.1 (1)" <<endl;
    
do{

    cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
    cout << "1) Triangle"<<endl;
    cout << "2) Rectangke"<<endl;
    cout << "3) Square"<<endl;
    cout << "4) Circle"<<endl;
    cout << "5) Quit"<<endl;
    cout << "Which shape: ";
    cin>>numShape;
    cout<<endl;

    if(numShape ==1){
        cout<<"Base: ";
        cin>>numBase;
        cout<<"Height: ";
        cin>>numHeight;
        cout<<endl; 
        cout<<"The area is "<<area_triangle(&numBase, &numHeight)<<"."<<endl;
       // cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;

    }
    else if(numShape ==2){
        cout<<"Length: ";
        cin>>numBase;
        cout<<"Width: ";
        cin>>numHeight;
        cout<<endl; 
        cout<<"The area is "<<area_rectangle(&numBase, &numHeight)<<"."<<endl;
        //cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;

    }
    else if(numShape ==3){
        cout<<"Side length: ";
        cin>>numBase;
        
        cout<<endl; 
        cout<<"The area is "<<area_square(&radius)<<"."<<endl;
        //cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
    }
    else if (numShape ==4){
        cout<<"Radius"<<endl;
        cin>>radius;
        cout<<endl; 
        cout<<"The area is "<<area_circle(&radius)<<"."<<endl;
        //cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;

    }
    
} while (numShape!=5);    
    
cout<<"GoodBye!"<<endl;


}

int area_rectangle(int *length, int *width){
    
    int recArea = (*length)*(*width); 
    return recArea;
}
double area_circle(int *radius){
    
    double cirArea = pi*(*radius)*(*radius); 
    return cirArea;
}
int area_square(int *side){
    
    int sqaArea = *side*(*side); 
    return sqaArea;
}

double area_triangle(int *base, int *height){
    
    double triArea = *base*(*height)/2; 
    return triArea;
}