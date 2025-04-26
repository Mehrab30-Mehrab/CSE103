#include <stdio.h>
int main() {
int a, b, c, d;
int count = 0;
printf("Enter 4 integers: ");
scanf("%d %d %d %d", &a, &b, &c, &d);
count = 1;
if (b != a) {
 count = count + 1;
    }
if (c != a && c != b) {
 count = count + 1;
    }
if (d != a && d != b && d != c) {
 count = count + 1;
    }
printf("Number of distinct values: %d\n", count);
return 0;
}
