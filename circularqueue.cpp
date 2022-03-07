#include<iostream>
using namespace std;


class akash_105
{
	public:
	int cq[5];
	int front,rear,n;
	akash_105()
	{
		front=-1;
		rear=-1;
		n=5;
	}
	void insCQ(int val)
	{
		if((front==0 && rear==n-1) || (front==rear+1))
		{
			cout<<"Queue Overflow\n";
			return;
		}
		if(front==-1)
		{
			front=0;
			rear=0;
		}
		else
		{
			if(rear==n-1)
				rear=0;
			else
				rear=rear+1;
		}
		cq[rear]=val;
	}
	void delCQ()
	{
		if(front==-1)
		{
			cout<<"Queue Underflow\n";
			return;
		}
		cout<<"Elements deleted from Queue is: "<<cq[front]<<endl;
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			if(front==n-1)
				front=0;
			else
				front=front+1;
		}
	}
	void dispCQ()
	{
		int f=front, r=rear;
		if(front==-1)
		{
			cout<<"Queue is empty"<<endl;
			return;
		}
		cout<<"Queue elements are:\n";
		if(f<=r)
		{

			while(f<=r)
			{
				cout<<cq[f]<<" ";
				f++;
			}
		}
		else
		{
			while(f<=n-1)
			{
				cout<<cq[f]<<" ";
				f++;
			}
			f=0;
			while(f<=r)
			{
				cout<<cq[f]<<" ";
				f++;
			}
		}
	}
};
void main()
{
	clrscr();
	akash_105 a;
	int ch,val;
	cout<<"1) Insert\n2) Delete\n3) Display\n4) Exit \n";
	do
	{
		cout<<"\nEnter Choice: "<<endl;
		cin>>ch;

		switch(ch)
		{
			case 1: cout<<"Input the value for insertion: "<<endl;
				cin>>val;
				a.insCQ(val);
				break;
			case 2: a.delCQ();
				break;
			case 3:	a.dispCQ();
				break;
			case 4: cout<<"Exit";
				break;
			default: cout<<"Invalid!\n";
		}
	}
	while(ch!=4);
	getch();
}
