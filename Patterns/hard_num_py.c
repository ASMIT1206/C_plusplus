#include<stdio.h>
int main(){
int n;
printf("enter no. of rows ");
scanf("%d",&n); 

 

for (int i = 1; i<=n; i++)
{ 
for(int k=1;k<=n-i;k++)
{
    printf(" ");
}

for(int j=1;j<=i;j++){
printf("%d",j);

}
for(int q=1;q<=i-1;q++){
    printf("%d",q) ;

}

printf("\n");

}

return 0;}
