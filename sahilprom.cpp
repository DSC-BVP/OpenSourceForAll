#include<iostream>
using namespace std;
int main()
{
	int a,b,n,x,y,ar[100];
	cout<<"\nEnter no. of elements of array (upto 100):";
	cin>>n;
	cout<<"\nNow, Enter Elements\n";
	for(b=0;b<n;b++)
	{  cout<<"Enter "<<b+1<<" element:";   cin>>ar[b];          }
	x=0;y=n;
	while(x!=1)
	{ x=0;
	 for(b=1;b<y;b+=2)
	 {
	   ar[x]=ar[b]; ++x;

	 }  y=x;
	}
	cout<<"the last no. left is:----"<<ar[x];

}
