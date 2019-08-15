#include <iostream>
using namespace std;
int main()
{
    int d[10][10],path[10][10],row,col,n,v,p,z;
    cout<<"Enter number of Nodes : ";
    cin>>n;
    cout<<"Enter Distance Matrix..."<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;++j)
        {
            cin>>d[i][j];
        }
    }
    cout<<"Enter the Final Node : ";
    cin>>v;
    cout<<"Enter number of Paths :";
    cin>>p;
    int dist[p+1];
    cout<<"Enter Path Matrix..."<<endl;
    for(int i=1;i<=p;i++)
    {
        for(int j=1;j<=n;++j)
        {
            cin>>path[i][j];
        }
    }
    for(int i=1;i<=p;i++)
    {
        dist[i]=0;
        row=1;
        for(int j=1;j<=n;j++)
        {
            if(row!=v)
            {
                col=path[i][j+1];
                dist[i]=dist[i]+d[row][col];
            }
            row=col;
        }
    }
    int m=dist[1];
    for(int i=1;i<=p;i++)
    {
        if(m>=dist[i])
        {
            m=dist[i];
            z=i;
        }
    }
    cout<<"Minimum Distance is : "<<m<<endl;
    cout<<"Required Path is : ";
    for(int i=1;i<=n;i++)
    {
        if(path[z][i]!=0)
        {
            cout<<path[z][i]<<"-->";
        }
    }
    cout<<"Reached!"<<endl;
    return 0;
}
