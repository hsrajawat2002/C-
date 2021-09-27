#include<iostream>
using namespace std;



int main(){
    int a=10;
    if(a>7){
        goto jump;
    }
    jump:
      cout<<"hello"<<endl;
    
    
    return 0;
}