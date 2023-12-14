//TO PRINT ALL THE 32 BITS IN BINARY FOR A DECIMAL NUMBER ENTERED BY USER

#include<iostream>
using namespace std;
int main()
{
    int s=31;
    int n;
    cin>>n;
    int num;


 while(s>=0)
 {

    num=1<<s;
    if((n & num)==0)
    {
        cout<<"0";
    }
    else
        cout<<"1";
    s=s-1;
}

}
