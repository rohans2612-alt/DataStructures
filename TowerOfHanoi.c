#include <stdio.h>
#include <stdlib.h>
void ToH(int n,char s,char d,char t)
{
    if(n==1)
        printf("\nMove %d disk from %c to %c",n,s,d);
    else
    {
        ToH(n-1,s,t,d);
        printf("\nMove %d disk from %c to %c",n,s,d);
        ToH(n-1,t,d,s);
    }
}
int main()
{
    int n;
    printf("\nRead number of disks:");
    scanf("%d",&n);
    ToH(n,'s','d','t');
    return 0;
}
