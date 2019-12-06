#include <stdio.h>
int main() {
    int num, Num1, remainder, result;
    result=0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    if(num==0)
        printf("It is not valid");
        exit(0);
    Num1 = num;
    while (Num1 != 0) {
        remainder = Num1 % 10;
        result += remainder * remainder * remainder;
        Num1 /= 10;
    }
    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
    return 0;
}
