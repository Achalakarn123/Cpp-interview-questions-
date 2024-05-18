#include<stdio.h>
int power(int n)
{
    int pow=1;
    for(int i=1;i<=n;i++)
    {
        pow=pow*i;
    }
    return pow;

}
void main()
{
    int n,pow;
    printf("Enter the value of n:-");
    scanf("%d",&n);
     printf("%d",power(n));

}