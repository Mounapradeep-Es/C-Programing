#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number ; \n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping a = %d and b= %d \n",a,b);
    return 0;
}