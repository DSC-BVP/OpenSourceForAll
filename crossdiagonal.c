int main()
{
    int n,i,j;
    printf("enter n:");
    scanf("%d",&n);
    int A[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter elements of matrix:");
            scanf("%d",&A[i][j]);

        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j==n-1)
                printf("%d  ",A[i][j]);
            else
                printf("0  ");
        }
        printf("\n");
    }

}
