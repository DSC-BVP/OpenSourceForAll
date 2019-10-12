/*
A thief robbing a store and can carry a maximal weight of W into his knapsack. There are N items and ith item weigh wi and is of value vi. What is the maximum value V, that thief can take ?
Space complexity should be O(n).
Input Format :
Line 1 : N i.e. number of items
Line 2 : N Integers i.e. weights of items separated by space
Line 3 : N Integers i.e. values of items separated by space
Line 4 : Integer W i.e. maximum weight thief can carry
Output Format :
Line 1 : Maximum value V
*/

#include<iostream>
using namespace std;

int knapsack(int* weights, int* values, int n, int maxWeight){

   int *storage1 = new int[maxWeight+1];
   int *storage2 = new int[maxWeight+1];

  for(int i =0;i<=maxWeight;i++)
    storage1[i] = 0;
  int j= 1;
  for(int i =1;i<=n;i++)
  {
    storage2[0] = 0;
    for(int j = 1;j<=maxWeight;j++)
    {
      int a =0 , b=0;
      if(j<weights[i-1])
        storage2[j] = storage1[j];
     else
     {
       a = storage1[j-weights[i-1]] +values[i-1];
       b = storage1[j];
       storage2[j] = a>b?a:b;
     }

    }

   int*temp = storage1;
   storage1 = storage2;
   storage2 = temp;
  }



  int ans = storage1[maxWeight] ;
  delete[]storage1;
  delete[]storage2;

  return ans;

}

int main(){

  int n;
  cin >> n;
  int* weights = new int[n];
  int* values = new int[n];

  for(int i = 0; i < n; i++){
    cin >> weights[i];
  }

  for(int i = 0; i < n; i++){
    cin >> values[i];
  }

  int maxWeight;
  cin >> maxWeight;

  cout << knapsack(weights, values, n, maxWeight);

}



