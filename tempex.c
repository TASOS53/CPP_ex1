#include<stdio.h>

void changeVal(int * );

int main()
{
    int x =5;
    int *y= &x;
    printf("value of x is: %d\n",x);
    changeVal(y);
    printf("value of x is: %d",x);

    return 0;
}

void changeVal(int *y)
{
    *y=*y+20;
    
}