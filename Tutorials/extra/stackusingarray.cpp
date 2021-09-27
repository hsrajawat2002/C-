#include<iostream>
using namespace std;
class stackusingarray{
	private:
		int *data;
		int nextindex;
		int capacity;
    public:
         stackusingarray(int totalsize)
         {
         	data=new int[totalsize];
         	nextindex=0;
         	capacity=totalsize;
		 }
		 int size(){
		 	return nextindex;
		 }
		 int isempty()
		 {
		 	if(nextindex==0)
		 	return 1;
		 	else
		 	return 0;
		 }
		 void push(int element)
		 {
		 	if(nextindex!=capacity)
		 	data[nextindex]=element;
		 	nextindex++;
		 }
		 int pop()
		 {
		 	if(nextindex==0)
		 	return isempty();
		 	else
		 	nextindex--;
		 	return data[nextindex];
		 }
		 int top()
		 {
		 	if(nextindex==0)
		 	return isempty();//it is not necessary to use INT_MIN
		 	else
		 	return(data[nextindex-1]);
		 }
};
int main()
{
	stackusingarray st(100);
	st.push(10);
	st.push(12);
	st.push(13);
	st.push(16);
	st.pop();
	cout<<st.top()<<endl;
	return 0;
}
