#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    
    int ans = 1;
    for(int i=1;i<=n;i++){
        ans = ans*i;
    }
    return ans;
}

int NCR(int n,int r){
    
    int ans = factorial(n)/(factorial(n-r)*factorial(r));
    return ans;
    
}

int main() {

        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        #endif
    //NCR, and Factorial of Number
        int n;
        cin>>n;
    cout<<factorial(n-1)<<endl;
    cout<<NCR(5,2)<<endl;
    
    
    return 0;
}
