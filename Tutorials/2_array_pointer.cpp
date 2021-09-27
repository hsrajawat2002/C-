#include<iostream>
using namespace std;

int main(){//
    //Array
    //1.
    int arr[]={1,45,34,6};
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    //2.
    int jun[2];                                   //here specifying length is must
    jun[0]=23;
    jun[1]=4;
    cout<<jun[1]<<endl;

    //Pointer in arrays
    int* a=jun;
    cout<<a<<endl; 
    cout<<*a<<endl; 
    cout<<(++a)<<endl;
    
    //Structure---------------------> Used to store different type of variable as a bunch.
    typedef struct name                           //Here typedef and na is used for ease
    {                                             //instead of writing whole we can simply use 'na'
        /* data */
        int id;
        char fav;
    }na;                   //<<<<<<<<----------------
    struct name harsh;
    harsh.id= 123;
    harsh.fav= 'A';
    na venky;             //<<<<<<-------------------
    venky.id= 148;
    venky.fav='V';
    cout<<harsh.fav<<endl;

    //Union --------------->> Same as structure the only difference is we can use only one at a time.
    typedef union money{
        int pound;
        float rupee;
        char paisa;
    }mon;
    union money alpha;                            //it stores less memory.
    alpha.paisa='A';
    cout<<alpha.rupee<<endl;                      //give garbage value as no value is assigned to rupee yet.
    alpha.rupee=520.25;
    cout<<alpha.paisa<<endl;                      // no value or garbage value bcs now rupee is updated and that will run in memory
    cout<<alpha.rupee<<endl;

    //ENUM----------->>> It is also a datatype where we can store any value but system willread it as integers
    enum names{hsr, ay, ss};
    cout<<hsr<<endl;
    cout<<ay<<endl;
    

    return 0;
}