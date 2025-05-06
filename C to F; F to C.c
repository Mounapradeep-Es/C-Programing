#include <stdio.h>
int main()
{
    int C,f;
    float F,c;
    printf("Enter the celcius ; \n");
    scanf("%d",&C);
    printf("Enter the Fahrenheit ; \n");
    scanf("%d",&f);
    c=((f-32)* (9/5)) ;
    F = ((9/5)*C) + 32 ;
    printf("The farenhit  %f ; ",F);
    printf("The celcius  %f ; ",c);
    return 0;
}

//F = (9/5 × °C) + 32.
// °C = [(°F-32)×5]/9