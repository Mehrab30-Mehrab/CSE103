#include <stdio.h>
int main() {
int m;
int result;
printf("Enter an integer: ");
scanf("%d", &m);
if (m > 0) {
result = 1;
}
else if (m == 0) {
result = 0;
}
else {
result = -1;
}
printf("Result: %d\n", result);
return 0;
}

