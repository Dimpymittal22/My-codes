#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number:");
    scanf("%d", &n);
    for(i=n;i>=0; i--)
    {
       printf("%d\n",i);
    }
}
