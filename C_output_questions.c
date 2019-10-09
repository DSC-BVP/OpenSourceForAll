// solve with logic not by directly writing code and compiling
//Question-1

#include<stdio.h>
void main(){
float i=0.11;
float j=0.6;
if(i<0.11){
printf("let");
}
else if(i>=0.11){
printf("us");
}

if(j<0.6){
printf("us");
}
else if(j>0.6){
printf("C");
}
}

//Question2

#include<stdio.h>
void swap(int *ptra,int *ptrb){
  int *temp;
  temp = ptrb;
  ptrb = ptra;
  ptra = temp;
}

void main(){
int a=2016,b=0,c=4,d=42;
swap(&a,&b);
if(a<c){
swap(&c,&a);
}
swap(&a,&b);
printf("%d\n",a);
}
