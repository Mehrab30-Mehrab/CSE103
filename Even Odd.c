#include<Stdio.h>
int main (){
    int num;
    printf("The gven number = ");
    scanf("%d", &num);
    if (num%2==0){
            printf("%d is even.\n", num);
    }
    else{
            printf("%d is odd.\n", num);
    }
    return 0;
}
