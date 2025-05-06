#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number ; \n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("After Swapping\n x = %d\n y = %d\n", a, b);
    return 0;
}

