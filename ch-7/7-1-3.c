#include<stdio.h>
main()
{
    int i=1,n;

    printf("Enter N :");
    scanf("%d",&n);

    i=n;
    while(i>=1)
    {
        if(i%2==1)
        {
            printf("%d \n",i);
        }
        i--;
    }    
}