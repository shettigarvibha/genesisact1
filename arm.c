#include <stdio.h>
int main() {
    int num, Num1, rem, result;
    result=0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    Num1 = num;
    while (Num1 != 0) {
        rem = Num1 % 10;
        result += rem * rem * rem;
        Num1 /= 10;
    }
    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
    return 0;
}
