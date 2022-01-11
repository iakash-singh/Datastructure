#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    cout<<"Enter first matrix"<<endl;
    for(i = 0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter First Matrix Elements Number in pocket["<<i<<"]["<<j<<"]";
            cin>>a[i][j];
        }
    }

    cout<<endl;



    cout<<"Enter Second matrix"<<endl;
    for(i = 0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter Second Matrix Elements Number in pocket["<<i<<"]["<<j<<"]";
            cin>>b[i][j];
        }
    }

    cout<<"The First Matrix is"<<endl;
    for(i = 0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<"The second Matrix is"<<endl;
    for(i = 0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          cout<<b[i][j]<<"  ";
        }
        cout<<endl;
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }

    }
    cout<<"The sum of two matrix is...."<<endl;
    
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<c[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}