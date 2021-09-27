#include<iostream>
using namespace std;
class queueusingarray{
	private:
		int *data;//why??
		int nextindex;
		int firstindex;
		int size;
		int capacity;
	public:
		queueusingarray(int s){
			data=new int[s];
			nextindex=0;//initialization of first index
			firstindex=-1;
			size=0;
			capacity=s;
				}
		int getsize(){
			return size;//O(1) time complexity
		}
		bool isempty()//queue is empty or not
		{
			return(size==0);
		}
		void enqueue(int element)//O(1) for one element
		{
			if(size==capacity){
				cout<<"overflow"<<endl;
			}
		data[nextindex]=element;
		nextindex=(nextindex+1)%capacity;//why??
		if(size==0)
		{
			nextindex=0;
			firstindex=-1;
		}
		size++;
		}
		int front()
		{   if(isempty())//why??
		       return 0;
			return(data[firstindex]);
		}
		int dequeue()
		{
			if(isempty())//why??
			return 0;
			int ans=data[firstindex];
			firstindex=(firstindex+1)%capacity;
			size--;
			return ans;
			if(size==0)
			{
				firstindex=-1;
				nextindex=0;
			}
			return ans;
		}
		
};
int main()
{
	queueusingarray q(6);
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	cout<<q.dequeue()<<endl;
	cout<<q.front()<<endl;
	return 0;
}
