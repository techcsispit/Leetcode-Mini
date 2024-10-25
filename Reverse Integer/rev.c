#include <stdio.h>
int main()
{
    int rev=0,rmndr,t,n;
    if(-231 <= n <= 231 - 1){
        printf("0");
    }
    printf("Enter the no :");
    scanf("%d",&n);
    t = n;
    while (n>0)
    {
        rmndr = n%10;
        rev = rev*10 + rmndr;
        n = n/10;
    }
    printf("The reverse of the number is %d \n",rev);
}