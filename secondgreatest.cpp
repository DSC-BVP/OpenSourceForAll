#include<iostream>
using namespace std;
int main()
{
    int n,i,max,s,pos;
    cout<<"enter n:";

    cin>>n;
    int A[n];
    for(i=0;i<n;i++)
    {
        cout<<"enter no.=";
        cin>>A[i];
    }
    max=A[0];
    for(i=0;i<n;i++)
    {
        if(max<A[i])
        {
            max=A[i];
            pos=i;
        }
    }
    s=A[0];
    for(i=0;i<n;i++)
    {
        if(i!=pos)
        {


        if(s<A[i])

        s=A[i];

        }

    }
    cout<<"second greatest element ="<<s;
}

