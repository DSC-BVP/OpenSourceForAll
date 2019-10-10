int main()
{
    int i,j,k,n,temp;
    printf("enter n:");
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
    {
        printf("enter elements:");
        scanf("%d",&A[i]);
    }
    printf("elements after deleting the duplicates:");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;)
        {
            if(A[i]==A[j])
            {
                for(k=j;k<n;k++)
                {

                   temp=A[k];
                    A[k]=A[k+1];
                    A[k+1]=temp;


                }
                n--;

            }
            else
                j++;
        }
    printf("\n\n%d",A[i]);


}
}
