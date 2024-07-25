#include<stdio.h>
main()
{
    int rows,i,j,num=1;
    printf("enter the number of rows");
    scanf("%d",rows);

    for(i=1 ; i<=rows ; i++)
    {
        for(j=i ; j<=i ; ++j)
        {
            printf("%d",++num);
        }
        {
            printf("\n");
        }
    }
}