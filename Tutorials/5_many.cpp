#include<iostream>
using namespace std;

inline int gamma(int a , int b){   //here inline means in this the function wont be given any memory unless and until it is called in the line.
    return a*b;                    //when the line will have the function only then the function will be active and will be given memory
}                                  //inline functions should be avoided while having static variable in them
int main(){
    static int a=8;  //here static means for example if a=8 and once the loop is run for a++ everytime the a will increase and will retain the value of a.
    return 0;
    
}