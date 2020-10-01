#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void bin_pack(vector<int>N, int S, int C, int P, vector<int>mains, vector<int>solar)
{
    sort(N.begin(), N.end(), greater<int>());
    if(S <= C)
    {
        cout<<"All rooms allocated to local energy(solar)"<<endl;
        return;
    }

    for(int i = 0; i < N.size(); i++)
    {
        if(N[i] <= C)
        {
            solar.push_back(N[i]);
            C = C - N[i];
        }
        else
        {
            mains.push_back(N[i]);
            P = P - N[i];
        }    
    }

    cout<<"Rooms allocated to local energy(solar): ";
    for(int i = 0; i < solar.size(); i++)
    {
        cout<<solar[i]<<", ";
    }
    cout<<endl<<"Rooms allocated to main energy: ";
    for(int i = 0; i < mains.size(); i++)
    {
        cout<<mains[i]<<", ";
    }
    cout<<endl;
    return;
}


int main()
{
    int n;
    cout<<"enter no. of rooms: ";
    cin>>n;
    cout<<"enter energy requirement for each room: "<<endl;
    vector<int> N(n);
    int S = 0; //total energy for home
    for(int i = 0; i < n; i++)
    {
        cout<<"Room "<<(i+1)<<": ";
        cin>>N[i];
        S += N[i];
        cout<<endl;
    }
    int C,P;
    cout<<"enter local energy(solar) capacity: ";
    cin>>C;
    cout<<"enter main energy capacity: ";
    cin>>P;

    vector<int> mains;
    vector<int> solar;

    cout<<endl<<"Energy Allocation: "<<endl;
    bin_pack(N,S,C,P,mains,solar);

    return 0;
}