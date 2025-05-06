#include <stdio.h>

int main(){
    int age,lic;
    printf("Enter the Age :  ");
    scanf("%d",&age);
    printf("Enter the licence :  ");
    scanf("%d",&lic);
    if (age >= 18){
        if(lic){
            printf("You can drive .\n");
            if(age >= 40 ){
                printf("Please, Renew the lisence");
            }
        }else{
            printf("You need a license to drive .\n");
        }
    }else{
        printf("You are too young to drive .");
    }
    return 0;
}
   