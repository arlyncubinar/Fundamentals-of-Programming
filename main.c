#include <stdio.h>

int main(){
    float number1, number2;
    
    printf("Enter first number: ");
    scanf("%f", &number1);
    
    printf("Enter second number: ");
    scanf("%f", &number2);
    
    printf("CALCU ");
    printf("ADD: %2.f\n", number1 + number2);
    printf("SUB: %2.f\n", number1 - number2);
    printf("DIVI: %2.f\n", number1 / number2);
    printf("MULTI: %2.f\n", number1 * number2);
    printf("REMINDER: %d\n", (int)number1 % (int)number2);
    return 0;
}
