#include <stdio.h>

int main() 
{
    int num1, num2, i;

    printf("Enter two integers");
    scanf("%d %d", &num1, &num2);

    for(i = 1; i <= 100; i++) {
        if(i == num1*num2) {
            printf("%d", i);
            break;
        }
    return 0;
}