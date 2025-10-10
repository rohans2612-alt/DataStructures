#include <stdio.h>
#include <stdlib.h>

int GCD(int a,int b)
{
    if(a==0)
        return b;
    return GCD(b%a,a);
}
int main()
{
    int a,b;
    printf("\nEnter the value of a and b:");
    scanf("%d%d",&a,&b);
    printf("\nGCD(%d,%d)is %d\n",a,b,GCD(a,b));
    return 0;
}

