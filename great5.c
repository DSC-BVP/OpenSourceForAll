int main()
{
    int a,b,c,d,e;
    printf("enter 5 numbers");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    printf("greatest of all :");
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                if(a>e)
                    printf("%d",a);
                else
                    printf("%d",e);

            }
            else
                if(d>e)
                printf("%d",d);
            else
                printf("%d",e);

        }
        else
            if(c>d)
        {
            if(c>e)
                printf("%d",c);
            else
                printf("%d",e);

        }
        else
            if(d>e)
            printf("%d",d);
        else
            printf("%d",e);

    }
    else
        if(b>c)
    {
        if(b>d)
        {
            if(b>e)
                printf("%d",b);
            else
                printf("%d",e);

        }
        else
            if(d>e)
            printf("%d",d);
        else
            printf("%d",e);

    }
    else
        if(c>d)
    {
        if(c>e)
            printf("%d",c);
        else
            printf("%d",e);

    }
    else
        if(d>e)
        printf("%d",d);
    else
        printf("%d",e);
}

