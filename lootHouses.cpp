/*
A thief wants to loot houses. He knows the amount of money in each house. He cannot loot two consecutive houses. Find the maximum amount of money he can loot.
Input Format
Line 1 : An integer N
Line 2 : N spaced integers denoting money in each house
Output Format
 Line 1 : Maximum amount of money looted
*/
#include<iostream>
#include<algorithm>
using namespace std;

int getMaxMoney(int arr[], int n){

  int*dp = new int[n];
  if(n==1)
    return arr[0];
  dp[0] = arr[0];
  dp[1] = max(arr[0],arr[1]);
  for(int i = 2; i<n;i++)
  {
    dp[i] = max((arr[i]+dp[i-2]),dp[i-1]);
  }

  int ans = dp[n-1];
  delete []dp;
  return ans;
}


int main(){
    int n;
    cin >> n;
    int arr[10000];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << getMaxMoney(arr, n);
}
