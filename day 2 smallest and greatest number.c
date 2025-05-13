#include <stdio.h>
int main() 
{
    int n, i, num;
    int max, min;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a valid number of elements.\n");
        return 1;
    }
    printf("Enter number 1: ");
    scanf("%d", &num);
    max = min = num;
    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }
    }
    printf("The largest number is: %d\n", max);
    printf("The smallest number is: %d\n", min);

    return 0;
}
