#include<iostream>
using namespace std;
 int main(){//
     int age;
     cout<<"Enter age"<<endl;
     cin>>age;
     if(age<18){
         cout<<"Underage"<<endl;
     }
     else if(age==18){
         cout<<"Appx entry allowed"<<endl;
     }
     else{
         cout<<"Boom you can go"<<endl;
     }
     switch (age)                                 //in switch we can have different cases at particular VALUES.
     {
     case 18:
         cout<<"20% discount"<<endl;
         break;
     case 20:
     cout<<"15% discount"<<endl;
         break;
     
     default:
         cout<<"No discount"<<endl;
         break;
     }
     if ((age>18) && (age<30)){
         cout<<"OK"<<endl;
     }
    
    //LOOPS
     for (int i = 0; i < 10; i++)                 //for loop
    {
        cout<<i<<endl;
    }
     while (age<30)                               //while loop
    {
        cout<<age<<endl;
        age=age+10;
    }
    /*Te only difference between do and while loop is
    do-while loop will run at least one time in the wors scenario.*/
    
    
    
    
        do                                            //do-while loop
    {                                             //we can also use break and continue same as in python.
        age=age+5;
        cout<<age<<endl;
    } while (age<40);
    
    //Pointer
    int* a=&age;
    int**b= &a;           //pointer to pointer
    cout<<a<<endl;                                // a stores address of age
    cout<<*a<<endl;                               //*a gives the value whatever is stored at given address
    cout<<b<<endl;
    cout<<*b<<endl;
    cout<<**b<<endl;
    
     cout<<"No more entry allowed"<<endl;
     return 0;
 }