#include<iostream>
#include<math.h>
using namespace std;
void armstrong(int x){
    int power=1,arm=0;
    while (2>1){
        float c,d,cube;
        c= pow(10,power); d=pow(10,power-1);
        int a,b,c1,d1,e,f,cube1;
        c1= int(c); d1=int(d);
        a= x%c1; b= x%d1; e=a-b;
        f= e/d1; cube= pow(f,3);
        cube1= int(cube);
        if ((x/d1)==0)
        {
            break;
        }
        arm= arm+ cube1;
        power++;  }
    if (arm==x){
        cout<<"ARMSTRONG"<<endl; }
    else{
        cout<<"NA"<<endl; } }
void prime(int n){
    int count=0;
    for (int i = 2; i < n; i++){
        int a;
        a= n%i;
        if (a==0){
            count++;}  }
    if (count==0){
        cout<<"PRIME"<<endl; }
    else{
        cout<<"NA"<<endl;  } }
int main(){
    int num;
    cin>>num;
    prime(num);
    armstrong(num);
    return 0;
}