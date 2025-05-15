#include <stdio.h>

int main()
{
    char operator;
    double num1, num2, result;
    printf("enter the operator (+,-,*,/): ");
    scanf("%c", &operator);
    printf("enter two operands");
    scanf("%lf %lf", &num1, &num2);
    switch (operator)
    {
case '+':
result = num1 + num2;
printf("result: %.4lf\n", result);
break;

case '-':
result = num1 - num2;
printf("result: %.4lf\n", result);
break;

case '*':
result = num1 * num2;
printf("result: %.4lf\n", result);
break;

case '/':
result = num1 / num2;
printf("result: %.4lf\n", result);
break;


    }
    {
        printf("the number cannot divisible by zero");
        
    }
    
    return 0;
}
