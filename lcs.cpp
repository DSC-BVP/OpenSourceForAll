#include<iostream>
#include<string>
using namespace std;

int lcsdp(string a,string b,int l1,int l2){
  int i,j;
  int MT[l1+1][l2+1];
  for(i=0;i<=l1;i++){
    for(j=0;j<=l2;j++){
      if(i==0||j==0){
        MT[i][j]=0;
      }
      else if(a[i-1]==b[j-1]){
        MT[i][j]=1+MT[i-1][j-1];
      }
      else{
        MT[i][j]=max(MT[i][j-1],MT[i-1][j]);
      }
    }
  }
  return MT[l1][l2];
}

int main(){
  string s1,s2;
  int lcslen,l1,l2;
  cout<<"Enter first string: ";
  cin>>s1;
  cout<<endl<<"Enter second string: ";
  cin>>s2;
  l1=s1.length();
  l2=s2.length();
  lcslen = lcsdp(s1,s2,l1,l2);
  cout<<endl<<"Length of Longest Common Subsequence is: "<<lcslen;
  return 0;
}
