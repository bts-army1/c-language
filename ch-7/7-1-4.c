#include<stdio.h>
main()
{
    int i,year;

    printf("Enter i :");
    scanf("%d",&i);    
    printf("Enter year :");
    scanf("%d",&year);


    while(i<=year)
    {
        if(i%4==0)
        {
            printf("%d \n",i);
        }
        i++;
    }    
}