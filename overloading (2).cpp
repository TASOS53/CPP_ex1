#include<stdio.h>
#include<string.h>

int max(int a, int b);
const char *max(const char *a, const char * b) ;

int main()
{
    printf("max(19, 69) = %d\n", max(19, 69));
    
    printf("max(abc, def) = %s\n", max("abc", "def"));
    
    return 0;
}

int max(int a, int b) 
{
    if (a > b) return a;
    return b;
}

const char *max(const char *a, const char * b) 
{
    if (strcmp(a, b) > 0) return a;
    return b;
}