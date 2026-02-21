#include<stdio.h>
int main()
{
    int a,b,multiply;
    printf("Enter the two number within a space:\n");
    scanf("%d %d",&a ,&b);
    multiply=(a*b);
    printf("%lld is the answer",(long long int)multiply);
    return 0;
}