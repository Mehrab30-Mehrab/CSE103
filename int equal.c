#include<stdio.h>
int main(){
int num1,num2;
printf("Enter the first integer :");
scanf("%d", &num1);
printf("Enter the second integer :");
scanf("%d", &num2);
if (num1==num2){
    printf("The two integers are equal");
}
else {
    printf("The two integers are not equal");
}
return 0;
}
