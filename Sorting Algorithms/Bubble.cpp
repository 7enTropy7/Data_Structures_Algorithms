#include<iostream>
using namespace std;
int main()
{
	int x[10];
	cout<<"Enter 10 numbers."<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>x[i];
	}
	for(int i=0;i<9;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(x[i]>x[j])
			{
				int temp=x[i];
				x[i]=x[j];
				x[j]=temp;
				for(int i=0;i<10;i++)
                {
                    cout<<x[i]<<" ";
                }
                cout<<endl;
			}
		}
	}
return 0;
}
