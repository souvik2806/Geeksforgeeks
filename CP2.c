#include<stdio.h>

int main()
{
int arr[6]={1,2,3,4,5,6},num,index,arr1[6];
printf("Enter your number\n");
scanf("%d",&num);
printf("\nEnter your index\n");
scanf("%d",&index);
for(int i=6;i>num;i--)
    arr1[i]=arr[i-1];
    arr1[index]=num;
    for(int j=0;j<=6;j++)
    printf("%d\n",arr1[j]);
    


    
    return 0;
}