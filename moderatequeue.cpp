#include<iostream.h>
#include<conio.h>
#define max_size 5

class akash_105md
{
	private:
	int item,i,r,f,arr_q[max_size];

	public:
	int index,no;
	akash_105md()
	{
		f=0;
		r=0;
	}
	void insert()
	{
		if(r==max_size)
		{
			cout<<"\n Queue Reached Max!";
		}
		else
		{
			cout<<"\n Enter the value to be insert: ";
			cin>>item;
			cout<<"\n Position: "<<r<<", Insert Value: "<<item;
			arr_q[r++]=item;
		}
	}
	void remove_data()
	{
		if(f==r)
			cout<<"\nQueue is empty";
		else
		{
			cout<<"\nPosition: "<<f<<", Remove Value: "<<arr_q[f];
			f++;
		}
		if(f==r)
		{
			f=0;
			r=0;
		}
	}
	void display()
	{
		cout<<"\nQueue size: "<<r-f;
		for(i=f;i<r;i++)
		{
			cout<<"\n Position: "<<i<<", Value: "<<arr_q[i];
		}
	}
	void search()
	{
		if(f==r)
			cout<<"Queue is Empty";
		else
		{
			cout<<"Enter the number to be search: ";
			cin>>no;
			for(i=0;i<max_size;i++)
			{
				if(arr_q[i]==no)
				{
					index=i;
				}
			}
			if(index==-1)
			{
				cout<<"No. not found: ";
			}
			else
			{
				cout<<"No. found at position: "<<index;
			}

		}
	}
};
int main()
{
	clrscr();
	int ch,exit_q=1;
	akash_105md j;
	cout<<"\nSimple Queue Example-Class and Member function in C++";
	do
	{
		cout<<"\n\nQueue Main Menu";
		cout<<"\n1. Insert\n2. Remove\n3. Display \n4. Search \nOthers To Exit ";
		cout<<"\nEnter your choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1: j.insert();
				break;
			case 2: j.remove_data();
				break;
			case 3: j.display();
				break;
			case 4: j.search();
				break;
			default: exit_q=0;
				break;
		}
	}
	while(exit_q);
	getch();
	return 0;
}
