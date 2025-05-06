#include <stdio.h>

int main()
{
    int a,b,n;
    printf("Enter the number1 :  ");
    scanf("%d",&a);
    printf("Enter the number2 :  ");
    scanf("%d",&b);
    
    printf("1.add\n 2.sub\n 3.mul\n 4.div\n");
    scanf("%d",&n);
    if (n  == 1){
        printf("The addition of two numbers is %d",a+b);
        
    }else if (n == 2){
        printf("The subtraction of two numbers is %d",a-b);
    }else if (n == 3){
        printf("The multiplication of two numbers is %d",a*b);
    }else if(n == 4){
        printf("The divition of two numbers is %d\n",a/b);
        printf("The remainder is %d",a%b);
    }else{
        printf("Invalid Input ");
        printf("The input must be in numbers .(e.g 1 or 2 )");
    }

    return 0;
}