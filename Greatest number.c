#include<stdio.h>
int main(){
int a,b,c;
printf("1st number=");
scanf("%d", &a);
printf("2nd number=");
scanf("%d", &b);
printf("3rd number=");
scanf("%d", &c);
if (a>b && b>c){
    printf("The 1st number is the greatest among three");
}
else if (b>c){
    printf("The 2nd number is the greatest among three");
}
else{
    printf("The 3rd number is the greatest among three");
}
return 0;
}
