#include<iostream>
using namespace std;

//classes almost same as struct only difference is we can make private values and we can add functions in it. it is not only a simple datatype.
class money{
    private:                                      //anything in private is inaccessible even the functions.
        int id=261;
        static int x;
        string name="Awesome";
        
    public:
        int DA;
        int sal(int n){
            cout<<"Salary is: "<<n*12<<endl;
        }
        void pr();
};

int money::x;                                          //it must be declared outside     


void money ::pr(){                  //---->>> :: this is scope declaration
    cout<<"id is "<<id<<endl;
};
int main(){
    money harsh;
    harsh.sal(26);
    harsh.pr();
  
    
    return 0;
}