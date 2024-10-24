#include <stdio.h>
#include <stdlib.h>

int main()
{
int x ;
printf("please inter the value of x\n");
scanf("%d", &x);

if(x%7==0)
{
    printf("x is divisible");
}
else
{
    printf("x is not divisible");
}


   return 0;
}
