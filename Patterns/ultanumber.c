#include<stdio.h>
int main()
{
int n;
printf("enter the no. of rows: ");
scanf("%d",&n);


for (int i=1; i<=n; i++)
{
    for (int j = n; j >=i; j--)
       {
        printf("%d ",j);
        }
    printf("\n");

   
}




    return 0;
}