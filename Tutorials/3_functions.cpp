#include<iostream>
using namespace std;

int sum(int a,int b){                             //Creating a new function.
    int c=a+b;
    return c;
}

void pr();              //>>>>>-------------------Prototyping here we just tell that a function is coming and the program will automatically
//                                                //take it wherever it is present.
int main(){
    int m,n;
    cout<<"Enter Number:"<<endl;
    cin>>m;
    cout<<"Enter Number:"<<endl;
    cin>>n;
    cout<<"Sum is: "<<sum(m,n)<<endl;

    pr();
    return 0;
}
void pr(){                                        //we use void that means we don't have to return any particular value.
    cout<<"Hello guys"<<endl;
}//                                   --->>>>> default parameters in function should always at the right.
