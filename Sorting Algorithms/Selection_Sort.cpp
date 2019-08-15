#include<iostream>
using namespace std;
int main()
{
	int x[10],i,j,small,index;
	cout<<"Enter any 10 integer values."<<endl;
    for(i=0;i<10;i++)
	{
		cin>>x[i];
	}
		for(i=0;i<10;i++)
		{
			small=x[i];
			index=i;
			for(j=i;j<10;j++)
			{
				if(x[j]<small)
				{
					small=x[j];
					index=j;
				}
			}
			int temp=x[i];
			x[i]=x[index];
			x[index]=temp;
		}
		cout<<"The ascending order is... "<<endl;
		for(i=0;i<10;i++)
		{
		cout<<x[i]<<endl;
		}
	return 0;
}

