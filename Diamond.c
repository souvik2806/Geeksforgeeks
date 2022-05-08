#include<stdio.h>

int main()
{
 int n,i,k,c=1;
 printf("Enter your number of rows\n");
 scanf("%d",&n);
 c=n-1;
 for(k=1;k<=n;k++)
 {
     for(i=1;i<=c;i++)
     printf(" ");
     c--;
     for(i=1;i<=2*k-1;i++)
     printf("*");
     printf("\n");

 }
 c=1;
 for(k=1;k<=n-1;k++)
 {
     for(i=1;i<=c;i++)
     printf(" ");
     c++;
     for(i=1;i<=2*(n-k)-1;i++)
     printf("*");
     printf("\n");
 }
 return 0;



}