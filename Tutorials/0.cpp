#include<iostream>               //
#include<iomanip> 
/* There are two types of header files : 1. system and 2. by developer. to include system header files
we simply use <> and inside this name same as in line 1. to include header file by developer we use

include "alpha.h" 

alpha should be present in the same drectory else it will give error. */ 
int c=667;


using namespace std;
int a=8;
void pr(){                                                           // here void is same as def in python
    int a=7;
    cout<<a;
}
int main(){

    int a=6, b=3,c=10;
    int x;
    char alpha='x';
    float Y= 1.34;
    bool why= true;
    cout<<"Hello "<<a<<" \nYAhoo "<<why<<"\n Alpha is: "<<alpha;     // '<<' this is an insertion operator
    cout<<"\nEnter the value of x: ";
    cin>>x;                                                          // cin is used to take input and '>>' is extraction operator.                    
    cout<<"\nSum of a and x is: "<<a+x;
    pr();

    //Arithematic operator
    cout<<"Value of a+b is: "<<a+b<<endl;                            // endl is also used to denote a new line
    cout<<"Value of a-b is: "<<a-b<<endl;
    cout<<"Value of a*b is: "<<a*b<<endl;
    cout<<"Value of a/b is: "<<a/b<<endl;         //here a/b if the value is 1.56 ans will 1 as for integers value will be an integer.
    cout<<"Value of a%b is: "<<a%b<<endl;         // % gives the value of remainder same as python
    cout<<"Value is: "<<a++<<endl;                // first a wil print then increment of 1 will happen                               
    cout<<"Value is: "<<++a<<endl;                // first increment will happen then a will print
    cout<<"Value is: "<<a--<<endl;                // first a will print then decrement will happen
    cout<<"Value is: "<<--a<<endl;                // first decrement then printing of a

    //Comparison operators
    cout<<"Comparison operators are as\n";
    cout<<"Vaues are as: "<<(a==b)<<endl; 
    cout<<"Vaues are as: "<<(a!=b)<<endl; 
    cout<<"Vaues are as: "<<(a>b)<<endl;          //if true then 1
    cout<<"Vaues are as: "<<(a>b)<<endl;          //if false then 0
    cout<<"Vaues are as: "<<(a<b)<<endl; 
    cout<<"Vaues are as: "<<(a<=b)<<endl; 
    cout<<"Vaues are as: "<<(a>=b)<<endl;

    //Logical operators
    cout<<"Value are as: "<<((a==b)&&(a>=b))<<endl;
    cout<<"Value are as: "<<((a==b)||(a>=b))<<endl;
    cout<<"Value are as: "<<(!(a==b))<<endl;                         //XOR = if different then 1 if same then 0
    
    cout<<"Value of global c is: "<<::c;                             // here :: changes the scope of variable       
    
    //Size of
    cout<<"Size of: "<<sizeof(36.7)<<endl;                           // we can also use F and L t denote float and long double.
    cout<<"Size of: "<<sizeof(36.7f)<<endl;                          //sizeof is a keyword that tells size in bits.
    cout<<"Size of: "<<sizeof(36.7l)<<endl;
    
    //************Refrence************
    int x1=4;
    int & y1=x1;
    cout<<"Value of y is: "<<y1<<endl;

    //*********  Typecasting- changing type   ***********
    int x2= int(Y);
    cout<<"value of x2 is: "<<x2<<endl;

    int h=56,k=907,r=10045;
    cout<<"Value is: "<<setw(5)<<h<<endl;                            //setw is a manipulator in iomanip an it is same as rjust()
    cout<<"Value is: "<<setw(5)<<k<<endl;
    cout<<"Value is: "<<setw(5)<<r<<endl;
    
    cout<<"Value is: "<<h<<endl;
    cout<<"Value is: "<<k<<endl;
    cout<<"Value is: "<<r<<endl;

    const int a3=67;                              //here const is a keyword and thus value of a3 has become constant and cannot be changed.
    return 0;
}
//So we se '//' for a single line comment.
/* So we have int,char,float etc as in built datatypes
for new line we have to use \n to indicate
local variable is given preferance inside the function */